🧰 **Required Components**
- Arduino board
- TRIAC (for AC load control)
- Zero-crossing detector circuit (often using an optocoupler)
- Potentiometer (for manual dimming input)
- LED or AC bulb (load)
- Resistors (various, for circuit protection and biasing)
- Breadboard and jumper wires

⚙️ **How It Works**
- The zero-crossing detector senses when the AC mains voltage crosses zero and sends this information to the Arduino, providing a precise reference point on the AC sine wave[1][2].
- The Arduino reads the position of the potentiometer to determine the desired dimming level.
- After each zero crossing, the Arduino waits for a calculated delay (based on the potentiometer input) before triggering the TRIAC.
- The TRIAC then allows current to flow through the load (LED or bulb) for the remainder of the half-cycle, effectively controlling the brightness by adjusting how much of the AC waveform is delivered to the load[1][2].
- This process repeats for every half-cycle, resulting in smooth, predictable dimming.

🔬 **Working Principle**
- The project uses **phase control dimming**: by delaying the TRIAC trigger after each zero crossing, only a portion of the AC waveform is sent to the load, reducing average power and thus brightness[1][2][3].
- The zero-crossing detector ensures the TRIAC is triggered at the correct point in the AC cycle, making the dimming level consistent and flicker-free.
- The potentiometer acts as a user interface to set the dimming level, which the Arduino reads as an analog value and converts to a delay time for TRIAC triggering[1][2].

🏷️ **Applications**
- Home lighting dimmers (for incandescent or compatible LED bulbs)
- Fan speed control (with appropriate circuitry for inductive loads)
- Stage lighting systems
- Smart home automation for adjustable lighting
- Energy-saving lighting solutions

✨ **Optional Enhancements**
- Replace the potentiometer with digital buttons or a touchscreen for more precise control.
- Add wireless control (Bluetooth/Wi-Fi) for remote dimming via smartphone or smart home system.
- Integrate feedback (e.g., light sensor) for automatic brightness adjustment.
- Display the current dimming level on an LCD or OLED screen.
- Expand to multi-channel dimming for controlling several lights independently.

#️⃣ **Hashtags**
#Arduino #DimmerCircuit #TRIAC #ZeroCrossing #HomeAutomation #LightDimming #ElectronicsProject #LearnElectronicsIndia

[1] https://www.youtube.com/watch?v=zYtWBHV62WM
[2] https://www.instructables.com/Arduino-controlled-light-dimmer-The-circuit/
[3] https://www.technolabcreation.com/ac-light-dimmer-using-triac-esp32/
[4] https://www.learnelectronicsindia.com/post/how-to-control-led-brightness-using-a-potentiometer-and-arduino
[5] https://www.hackster.io/Techatronic/light-dimmer-circuit-using-arduino-arduino-light-dimmer-599e2b
[6] https://www.youtube.com/watch?v=jZ4yt38Bna8
[7] https://www.learnelectronicsindia.com/product-page/dimmer-circuit-project-code
[8] https://www.youtube.com/watch?v=vSZeHGA4WQA
[9] https://www.passeidireto.com/arquivo/73051560/ac-light-dimmer-using-arduino-and-triac
[10] https://www.youtube.com/playlist?list=PLWqnlHhsmcI5dmfYIEqT1CcU5YQzBSU7Z
