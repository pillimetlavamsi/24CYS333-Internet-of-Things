# Configuration:
We configured RaspberryPi to enable ssh service on boot and automatically connect to a wifi router to get an ip address


## Stage 1:
we used raspberry pi, inbuilt wifi interface (wlan0) to connect to the router/Personal Hostpot and attain IP address.
After the connection, the packets will be processed and actions are preformed according to some firewall rules.
constraint: If a port scan happens on the any machine over the network, the psad service will alert the root user on raspberry pi and redirects the attacker to the HoneyPot.

**psad.conf**
```psad
ENABLE_AUTO_IDS Y;
ENABLE_AUTO_IDS_EMAILS N;
IPT_SYSLOG_FILE /var/log/syslog;
EXPECT_TCP_OPTIONS Y;
EXPECT_TCP_FLAGS Y;
AUTO_IDS_DANGER_LEVEL 3;
AUTO_BLOCKING_SCRIPT /etc/psad/redirect_to_honeypot.sh;

```
**redirect script**
```redirect_to_honeypot.sh
#!/bin/bash

# Get the attacker's IP from PSAD
ATTACKER_IP=$1

# Redirect the attacker's HTTP traffic to the honeypot (port 80)
iptables -t nat -A PREROUTING -s $ATTACKER_IP -p tcp --dport 80 -j DNAT --to-destination 192.168.1.200

# Log the redirection
echo "$(date) - Redirected $ATTACKER_IP to honeypot" >> /var/log/honeypot_redirect.log
```
**IPTables config**
```iptables
# Flush existing rules
sudo iptables -F
sudo iptables -t nat -F

# Allow forwarding from Raspberry Pi to the network
sudo iptables -A FORWARD -i eth0 -o eth0 -j ACCEPT

# Default NAT for regular traffic (forward to actual server)
sudo iptables -t nat -A PREROUTING -d 192.168.1.100 -j DNAT --to-destination 192.168.1.100

# Redirect traffic from the attacker (X.X.X.X) to the honeypot
sudo iptables -t nat -A PREROUTING -s X.X.X.X -p tcp --dport 80 -j DNAT --to-destination 192.168.1.200

# Allow masquerading for outbound traffic
sudo iptables -t nat -A POSTROUTING -j MASQUERADE

```

## Stage 2:
We created a virtual wifi interface (wlan0_ap) that acts as a Access Point to the machines under stage 2
Supported modes for raspberry pi 3 B+
```bash
Supported interface modes:
	* IBSS
	* managed
	* AP
	* AP/VLAN
	* monitor
	* mesh point
```

At this point of time, we are good with connection hardware.
To achive DHCP for allocation of IP address, we used dnsmasq and host apd service
- **dnsmasq**: allocates an ip address for the network [DHCP server]
```dnsmasq
interface=wlan0_ap
dhcp-range=192.168.4.2,192.168.4.20,255.255.255.0,24h

domain-needed
bogus-priv
dhcp-option=3,192.168.4.1
dhcp-option=6,192.168.4.1
```

- **Hostapd**: used to configure the virtual wifi interface as access point.
```Hostapd
interface=wlan0_ap
driver=nl80211
ssid=RaspberryPi3
hw_mode=g
channel=6
wmm_enabled=0
auth_algs=1
#wpa=2
#wpa_passphrase=12345678
#wpa_key_mgmt=WPA-PSK
#rsn_pairwise=CCMP
```
## Stage 3
At stage 3, we used 2 virtual machines running web servers which are mirrors to each other but the purpose is different. 
One webserver collects all the sensor data from the legit user and sends it through the raspberry pi to the webserver that is hosted on the **vm1**

if any attacker trys a port over the network, the psad service on raspberrypi detects the attack and redirect the user to **honeypot** that is on **vm2**

both the **vms** are connected using the bridged adapter for direct communication.
