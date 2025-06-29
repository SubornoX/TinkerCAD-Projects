🧰 **Required Components**
- Arduino UNO board
- 8 LEDs
- 8 resistors (220Ω each)
- Breadboard
- Jumper wires[1]

⚙️ **How It Works**
- The 8 LEDs are connected to the Arduino's digital pins 1 through 8, each with a current-limiting resistor.
- The negative ends of the LEDs are connected to the Arduino's ground.
- The Arduino runs a program that sequentially turns each LED on (flowing effect) and then off one after another, creating a visual effect similar to a "flowing" or "running" light[1].
- This is achieved using two for-loops in the code: one to light up each LED in order, and another to turn them off in the same sequence, with a delay between each step for a smooth effect[1].

🔬 **Working Principle**
- The project uses digital output pins to control each LED.
- The code sets the pins as outputs and uses digitalWrite() to switch each LED on and off in sequence.
- The delay function creates the timing for the flowing effect, making the LEDs appear to move in a wave from one end to the other and back[1].

🏷️ **Applications**
- Decorative lighting (e.g., LED chasers in signs or displays)
- Visual indicators for progress or status
- Educational demonstrations for loops and digital outputs in Arduino
- Robotics (e.g., animated eyes or effects)

✨ **Optional Enhancements**
- Add more LEDs for a longer flowing effect.
- Use RGB LEDs for color-changing patterns.
- Control the speed of the flowing effect with a potentiometer.
- Add sound or music synchronization.
- Implement reverse flow or random patterns for advanced effects.

#️⃣ **Hashtags**
#Arduino #LEDFlowingLights #TinkerCAD #LEDChaser #ElectronicsProject #LearnElectronicsIndia #STEM #DIY #DigitalOutput

[1] https://www.youtube.com/watch?v=jfH_3k5It7o
