from flask import Flask, render_template, Response, request, jsonify
from sklearn.linear_model import LinearRegression
import numpy as np
import easyocr
import requests
import cv2
import pandas as pd
from ultralytics import YOLO
import os 
import json

app = Flask(__name__)

# 🔴 HERE API Key
HERE_API_KEY = os.getenv("HERE_API_KEY", "your-backup-key")

# 🔵 Route: Home Dashboard
@app.route('/')
def index():
    return render_template('here_map.html')
   
@app.route('/api/here-traffic-flow')
def get_traffic_flow():
    """Proxy API to Fetch Traffic Flow Data"""
    
    print("Routing to /api/here-traffic-flow")
    
    try:
        url = f"https://data.traffic.hereapi.com/v7/flow?in=circle:11.0168,76.9558;r=5000&locationReferencing=olr&apiKey={HERE_API_KEY}"
        
        response = requests.get(url)
        response.raise_for_status()  # 🔴 Raise an error for non-200 responses

        return jsonify(response.json())  # Return valid JSON response

    except requests.exceptions.RequestException as e:
        print(f"Error fetching traffic flow: {e}")  # Log error
        return jsonify({"error": "Failed to fetch traffic data"}), 500  # Return error

    
@app.route('/aqi/<city>', methods=['GET'])
def get_aqi(city):
    response = requests.get(f'https://api.waqi.info/feed/{city}/?token=62a50a5a118a554f08aa33af974217ad84e6deb8')
    data = response.json()
    
    if data.get("status") == "ok":
        return jsonify({"city": city, "aqi": data["data"]["aqi"]})
    else:
        return jsonify({"error": "Unable to fetch AQI data."}), 400    
        

if __name__ == '__main__':
    app.run(debug=True)
    

