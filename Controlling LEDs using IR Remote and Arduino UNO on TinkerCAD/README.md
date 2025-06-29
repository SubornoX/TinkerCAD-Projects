🧰 **Required Components**
- Arduino UNO
- Breadboard
- IR Remote
- IR Sensor
- LEDs (Green, Orange, Blue)
- 220Ω Resistors
- Connecting wires[1]

⚙️ **How It Works**
- The IR sensor receives signals from the IR remote.
- Each button on the remote sends a unique code, which the Arduino reads via the IR sensor connected to digital pin 12.
- The Arduino decodes the received IR signal and, depending on the button pressed, turns specific LEDs on or off.
- For example, pressing "1" turns the blue LED on, "2" turns it off, "3" turns the orange LED on, and so on[1].

🔬 **Working Principle**
- The IR remote emits modulated infrared light when a button is pressed.
- The IR sensor detects this light and converts it into an electrical signal.
- The Arduino uses the IRremote library to decode the signal and identify which button was pressed.
- The code uses a switch statement to match the decoded value to specific LED control actions[1].

🏷️ **Applications**
- Remote-controlled lighting systems
- Home automation projects
- DIY electronics learning and prototyping
- Robotics (remote control of robot actions)
- Interactive exhibits or displays[1]

✨ **Optional Enhancements**
- Add more LEDs or devices for expanded control.
- Integrate an LCD display to show which button was pressed.
- Implement dimming or color-changing features for LEDs.
- Add feedback (buzzer, notification) for button presses.
- Use wireless modules for remote control over greater distances.

#️⃣ **Hashtags**
#Arduino #IRRemote #TinkerCAD #LEDControl #LearnElectronicsIndia #ArduinoUNO #IRSensor #DIY #Electronics #HomeAutomation

[1] https://www.youtube.com/watch?v=Lk_oFu-3aw4
