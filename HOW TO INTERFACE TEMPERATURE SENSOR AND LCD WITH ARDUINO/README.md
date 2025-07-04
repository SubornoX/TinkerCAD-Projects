**🧰 Required Components**
- Arduino UNO board
- 16×2 LCD display
- TMP36 temperature sensor
- 220Ω resistor (for LCD backlight)
- Potentiometer (for LCD contrast)
- Breadboard
- Jumper wires

**⚙️ How It Works**
- **The TMP36 temperature sensor** is connected to the Arduino’s analog input (typically A0). It outputs a voltage proportional to the ambient temperature.
- **The LCD** is connected in 4-bit mode to Arduino digital pins (RS to pin 12, EN to pin 11, D4–D7 to pins 5–2). The potentiometer adjusts LCD contrast, and a 220Ω resistor is used for the backlight[1][2].
- The Arduino reads the analog voltage from the TMP36, converts it to temperature in Celsius (and optionally Fahrenheit), and displays the value on the LCD.

**🔬 Working Principle**
- The TMP36 outputs **10 mV per °C** with a 500 mV offset for 0°C.
- Arduino reads the analog value (0–1023), converts it to voltage, then calculates temperature using the TMP36’s scaling factor and offset.
- The LCD displays the temperature in real-time, updating as the sensor reading changes[1][2][3].

**Sample Calculation (TMP36):**
1. Read analog value from A0.
2. Convert to voltage:  
   $$ V_{out} = \text{analogRead} \times (5.0 / 1024) $$
3. Convert to temperature (°C):  
   $$ T_{C} = (V_{out} - 0.5) \times 100 $$
4. Convert to Fahrenheit (optional):  
   $$ T_{F} = T_{C} \times 1.8 + 32 $$

**🏷️ Applications**
- Digital thermometers
- Weather monitoring systems
- Home or industrial temperature monitoring
- Educational electronics projects

**✨ Optional Enhancements**
- Display both Celsius and Fahrenheit on the LCD.
- Add data logging or serial output for temperature history.
- Use other temperature sensors (e.g., DS18B20, LM35) with minor code adjustments[3][4].
- Integrate with IoT platforms for remote monitoring.

**#️⃣ Hasags
#Arduino #LCD #TemperatureSensor #TMP36 #DigitalThermometer #ElectronicsProject #LearnElectronicsIndia #DIY #STEM

**References:**  
- The video transcript and summary[1]
- Additional wiring and explanation from Instructables[2]
- Working principle and code from Hackatronic[3]
