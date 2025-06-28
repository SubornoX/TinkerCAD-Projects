🔌 **Required Components**
- Arduino board
- LDR (Light Dependent Resistor) / Photoresistor
- LED
- Resistors (for LDR and LED)
- Breadboard
- Connecting wires
- Multimeter

💡 **How It Works**
The LDR is connected to the Arduino through a voltage divider circuit. As the ambient light intensity changes, the resistance of the LDR changes, altering the voltage at the analog input pin of the Arduino. The Arduino reads this voltage, calculates the light intensity, and can use this value to control an LED or display the reading. The multimeter is used to measure the voltage across the LED, correlating it with the light intensity detected by the LDR[1].

⚙️ **Working Principle**
The LDR operates on the principle of photoconductivity: when light falls on the LDR, its resistance decreases. This allows more current to flow through the circuit, which the Arduino detects as a higher analog value. The Arduino processes this value and can trigger outputs (like turning on an LED) or display the measured intensity[1].

🏷️ **Applications**
- Automatic street lighting
- Light-sensitive alarms
- Smart home lighting systems
- Solar trackers
- Light intensity data logging for experiments

✨ **Optional Enhancements**
- Add an LCD or OLED display to show real-time light intensity values.
- Use multiple LDRs for directional light sensing.
- Integrate with IoT platforms for remote monitoring.
- Adjust threshold values in code for different lighting conditions.
- Add data logging to an SD card.

#Hashtags
#LightIntensityMeasurement #LDR #ArduinoProject #TinkerCAD #Electronics #STEM #LearnElectronicsIndia #LightSensor #Automation #DIYProjects

[1] https://www.youtube.com/watch?v=4ibf6wHOIok
