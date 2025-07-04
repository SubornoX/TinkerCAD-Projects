// C++ code
//

const int ledPin = 7; // Pin for the LED
const int sensorPin = 13; // Pin for the sensor


void setup() {  
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(sensorPin, INPUT);
}

void loop() {
  int sensorValue = digitalRead(sensorPin); // Read the sensor value
  if (sensorValue == HIGH) { // If the sensor is triggered
    digitalWrite(ledPin, HIGH);
    Serial.println("Sensor triggered! LED ON");
  }
  else { // If the sensor is not triggered
    digitalWrite(ledPin, LOW);
    Serial.println("Sensor not triggered. LED OFF");
  }

  delay(100); // Small delay to avoid bouncing issues
}

