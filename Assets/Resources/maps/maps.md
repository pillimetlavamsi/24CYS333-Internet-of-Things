# 24CYS333 - Internet of Things
![](https://img.shields.io/badge/Batch-22CYS-lightgreen) ![](https://img.shields.io/badge/UG-blue) ![](https://img.shields.io/badge/Subject-IoT-blue)
<br/>

## How to use maps

### Create an Account
- Create an [Account](https://platform.here.com/)
- Create an Application
- Create API Key 

### Sample Code 
```
	<script>
		var map = L.map('map').setView([11.0168, 76.9558], 13);

		// Add HERE Maps base layer
		const hereApiKey = "K8sooCSFKCDW_0GCDf_wuc_58mhafMLjiskoViPsrYw";  // 🔴 Replace with actual API Key
		const hereTileUrl = `https://maps.hereapi.com/v3/base/mc/{z}/{x}/{y}/png8?style=lite.day&lg=ENG&apiKey=${hereApiKey}`;
		L.tileLayer(hereTileUrl, { attribution: '&copy; HERE Technologies 2024' }).addTo(map);

		// Layer Groups
		var trafficLayerGroup = L.layerGroup().addTo(map);

		  // Fetch Traffic Flow Data via Flask API
	function fetchTrafficFlow() {
		fetch('/api/here-traffic-flow')  // 🔴 Calls Flask backend, not HERE API directly
			.then(response => response.json())
			.then(data => {
				console.log("Traffic Flow Data:", data);

				
                if (data.results.length === 0) {
                    console.warn("No traffic data available.");
                    return;
                }

                data.results.forEach(roadSegment => {
                    let roadName = roadSegment.location.description || "Unnamed Road";
                    let congestionLevel = roadSegment.currentFlow?.jamFactor || 0;
                    let speed = roadSegment.currentFlow?.speed || "N/A";

                    let color = congestionLevel <= 3 ? "#2ECC40" :
                                congestionLevel <= 7 ? "#FF851B" :
                                "#FF4136";

                    let randomLat = 11.01 + (Math.random() * 0.1);
                    let randomLon = 76.95 + (Math.random() * 0.1);

                    let marker = L.circle([randomLat, randomLon], {
                        color: color,
                        fillColor: color,
                        fillOpacity: 0.6,
                        radius: 44
                    }).addTo(trafficLayerGroup);

                    marker.bindPopup(`<b>${roadName}</b><br>🚦 Jam Factor: ${congestionLevel}<br>🚗 Speed: ${speed} km/h`);
                });

		})
    .catch(error => console.error("Error fetching HERE traffic data:", error));
	}


	fetchTrafficFlow();
	
	// Create a Legend for Congestion Levels
    var legend = L.control({position: 'bottomright'});
    legend.onAdd = function (map) {
        var div = L.DomUtil.create('div', 'legend'),
            jamFactorClasses = [
                { range: "0 - 3", description: "Low Congestion", color: "#2ECC40" },
                { range: "4 - 7", description: "Moderate Congestion", color: "#FF851B" },
                { range: "8 - 10", description: "High Congestion", color: "#FF4136" }
            ],
            labels = ['<h3>Jam Factor</h3>'];

        jamFactorClasses.forEach(function (jfClass) {
            labels.push(
                '<div class="label">' +
                    '<i style="background:' + jfClass.color + '; width: 10px; height: 10px; display: inline-block; margin-right: 5px;"></i> ' +
                    jfClass.range + ': ' + jfClass.description +
                '</div>');
        });

        div.innerHTML = labels.join('');
        return div;
    };

    legend.addTo(map);

    // Layer Control
    L.control.layers(null, { 
        "Traffic Flow": trafficLayerGroup, 
    }).addTo(map);

</script>
```