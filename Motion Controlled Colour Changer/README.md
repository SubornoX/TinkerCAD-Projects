### 🧰 Required Components
- Arduino board
- PIR sensor
- RGB LED
- Buzzer
- Jumper wires
- Breadboard

### ⚙️ How It Works
- **PIR Sensor:** Detects motion by sensing changes in infrared radiation from moving objects (e.g., people).
- **Arduino:** Reads the PIR sensor’s digital output.
- **RGB LED:** Changes color based on motion detection.
- **Buzzer:** Sounds an alert when motion is detected.

When the PIR sensor detects motion:
- The Arduino triggers the RGB LED to change to a new color.
- The buzzer is activated to provide an audible alert.

When no motion is detected:
- The RGB LED remains in its default state.
- The buzzer is off.

### 🔬 Working Principle
- The **PIR sensor** outputs a HIGH signal when it senses motion.
- The **Arduino** uses this signal to control both the RGB LED (by setting different color values) and the buzzer (by turning it on or off).
- This setup demonstrates how motion detection can be used for interactive lighting and alert systems.

### 🏷️ Applications
- Smart home automation (motion-activated lighting)
- Security and alarm systems
- Interactive art installations
- Energy-saving lighting control

### ✨ Optional Enhancements
- Add more color patterns or effects to the RGB LED.
- Integrate with a relay to control larger appliances.
- Use multiple PIR sensors for wider coverage.
- Log motion events or send notifications via IoT.

**Project code and further details are available at:**  
[LearnElectronicsIndia: Motion Controlled Colour Changer](https://www.learnelectronicsindia.com/post/motion-controlled-colour-changer)[1]

#️⃣ **Hashtags**
#Arduino #PIRSensor #RGBLED #MotionDetection #Buzzer #HomeAutomation #ElectronicsProject #LearnElectronicsIndia
