🧰 **Required Components**
- Arduino Uno board  
- 6 LEDs (various colors, e.g., green, yellow, red)  
- 6 resistors (220Ω each)  
- Potentiometer  
- Breadboard  
- Jumper wires[1]

⚙️ **How It Works**
- Six LEDs are connected to six digital pins of the Arduino Uno, each through a 220Ω resistor.
- A potentiometer is connected to the analog input pin (A5) of the Arduino.
- As you rotate the potentiometer, it outputs an analog value (0–1023) to the Arduino.
- The Arduino reads this value and, based on preset ranges, turns specific pairs of LEDs ON or OFF to create a pattern.
- The Serial Monitor displays the current potentiometer value, providing real-time feedback[1].

🔬 **Working Principle**
- The potentiometer acts as a voltage divider, converting its position into an analog voltage read by the Arduino.
- The Arduino uses the analogRead() function to capture the potentiometer value.
- Conditional logic in the Arduino code divides the potentiometer’s range into segments:
  - At low values, only the green LEDs turn on.
  - At mid values, both green and yellow LEDs turn on.
  - At high values, green, yellow, and red LEDs all turn on.
- When turning the potentiometer back down, the LEDs turn off in reverse order, creating a flowing pattern effect[1].

🏷️ **Applications**
- Interactive LED displays and patterns
- Learning tool for analog-to-digital conversion and conditional logic in Arduino
- Basis for traffic light simulations
- Decorative or festival lighting
- User feedback or status indicators in embedded systems[1]

✨ **Optional Enhancements**
- Add more LEDs for complex patterns or chaser effects.
- Use RGB LEDs for color mixing and more dynamic displays.
- Integrate sound or buzzers to sync with LED patterns.
- Replace the potentiometer with sensors (e.g., light, temperature) for responsive lighting.
- Display the potentiometer value or LED status on an LCD or OLED screen.
- Control patterns wirelessly using Bluetooth or Wi-Fi modules[1].

#️⃣ **Hashtags**
#Arduino #LEDPattern #Potentiometer #ElectronicsProject #TinkerCAD #LearnElectronicsIndia #LEDControl #AnalogInput #STEM #DIY

[1] https://www.youtube.com/watch?v=gFbouXJXPo0
