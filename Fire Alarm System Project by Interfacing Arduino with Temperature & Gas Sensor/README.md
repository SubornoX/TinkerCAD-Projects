
## Fire Alarm System Project by Interfacing Arduino with Temperature & Gas Sensor

**Required Components**

- Arduino board
- LM35 Temperature Sensor
- Gas Sensor (e.g., MQ series)
- Buzzer
- LED
- Breadboard
- Connecting wires[1]

**How It Works**

The project uses an Arduino to monitor readings from both a temperature sensor (LM35) and a gas sensor. The sensors are interfaced with the Arduino using analog inputs. The Arduino continuously checks the temperature and gas levels. If either the temperature exceeds a certain threshold or the gas sensor detects a dangerous concentration, the Arduino triggers a buzzer and lights up an LED to provide an audible and visual fire alert[1].

**Working Principle**

- The LM35 sensor outputs a voltage proportional to the ambient temperature, which the Arduino reads and converts to a temperature value.
- The gas sensor detects the presence of combustible gases and outputs a corresponding analog voltage.
- The Arduino is programmed to compare these sensor readings against predefined thresholds.
- When a threshold is exceeded (high temperature or gas detected), the Arduino activates the buzzer and LED, signaling a potential fire or gas leak[1].

**Applications**

- Fire detection and alarm systems in homes, offices, and factories
- Safety monitoring in laboratories and industrial environments
- Early warning systems for hazardous gas leaks[1]

**Optional Enhancements**

- Add an LCD display to show real-time temperature and gas levels.
- Integrate a GSM module to send SMS alerts in case of fire detection.
- Connect the system to the internet (IoT) for remote monitoring and notifications.
- Use relays to control exhaust fans or sprinklers automatically.
- Expand the system with multiple sensors for larger area coverage.

**Hashtags**

#FireAlarm #FireAlert #AlertFire #ProjectFireAlarm #FireSensor #FireAlarmUsingArduino #ArduinoFireAlarm #TempratureSensor #TempratureSensorArduino #ArduinoFireSensor #ProjectArduinoFireSensor #learnElectronicsindia[1]

[1] https://www.youtube.com/watch?v=fwwI4R_97DI
