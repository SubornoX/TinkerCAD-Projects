### 🧰 Components Needed
- **ATtiny85 microcontroller**  
- **TMP36 temperature sensor**  
- **LED**  
- **220Ω resistor** (for LED)  
- **1.5V battery (or suitable power source)**  
- Jumper wires and breadboard (optional for prototyping)

### ⚙️ Circuit Connections
- **ATtiny85 pins:**
  - Pin 8 → VCC (power supply positive)  
  - Pin 4 → GND (power supply ground)  
  - Pin 0 (PB0) → LED anode (through 220Ω resistor), LED cathode to GND  
  - Pin 2 (PB2 / A1) → TMP36 analog output pin  
- **TMP36 sensor:**
  - VCC → Battery positive  
  - GND → Battery negative  
  - Analog output → ATtiny85 pin PB2 (analog input)

### 🔬 How It Works
- The **TMP36 sensor outputs an analog voltage proportional to temperature**:  
  - 10 mV per °C with a 500 mV offset (at 0°C).  
- The ATtiny85 reads this analog voltage on pin PB2 (A1).  
- The analog reading (0–1023) is converted to voltage (0–5V) and then to temperature in Celsius using the formula:  
  ```
  voltage = (analogValue / 1024.0) * 5.0
  temperatureC = (voltage - 0.5) * 100
  ```
- The temperature is also converted to Fahrenheit if needed.  
- An LED connected to PB0 blinks at different rates depending on the temperature:  
  - **Very low temperatures (below 0°C / -40 to 0°C):** LED blinks very fast  
  - **Normal body temperature (30°C to 45°C):** LED blinks steadily (around 500 ms intervals)  
  - **High temperature (50°C to 90°C):** LED blinks slowly (around 1 second intervals)  
  - **Extreme temperature (above 100°C):** LED stops blinking (LED stays ON or OFF as per code) — indicating a fever or abnormal condition  

### 📝 Code Logic Overview
- Initialize LED pin as output and TMP36 analog pin as input.  
- Continuously read analog value from TMP36.  
- Convert analog value to temperature in Celsius.  
- Use `if-else` conditions to set LED blink delay based on temperature range.  
- Blink LED accordingly with `delay()` for timing.

### 🏷️ Applications
- Simple temperature monitoring with visual feedback.  
- Low-cost, compact thermometer using ATtiny85.  
- Educational project for learning analog sensor interfacing and microcontroller programming.  
- Can be extended for fever detection or environmental temperature sensing.

### ✨ Optional Enhancements
- Replace LED with an LCD/OLED display to show exact temperature values.  
- Add buzzer alarms for high temperature alerts.  
- Use wireless modules for remote temperature monitoring.  
- Power with rechargeable batteries or USB power for portability.  
- Log temperature data for trend analysis.
