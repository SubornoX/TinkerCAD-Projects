// C++ code

int calibrationTime = 30;
int ledPin = 7; // Pin for the LED
int sensorPin = 13; // Pin for the sensor
boolean flag = true; 
long unsigned int time;
long unsigned int pause = 5000; // 5 seconds pause



void setup() {  
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(sensorPin, INPUT);
  digitalWrite(ledPin, LOW);
  Serial.println("Starting calibration...");
  for (int i = 0; i < calibrationTime; i++) {
    Serial.print(".");
    delay(1000);
  }
  Serial.println("\nCalibration complete.");
  Serial.println("Sensor is ready.");
}

void loop() {
  if (digitalRead(sensorPin) == HIGH) {
    digitalWrite(ledPin, HIGH);
    if (flag) {
      flag = false;
      time = millis()/1000; // Record the time in seconds
      Serial.print("Sensor activated at: ");
      Serial.print(time);
      Serial.println(" seconds");
    }
  }


  if (digitalRead(sensorPin) == LOW && !flag && millis() - time * 1000 >= pause) {
    flag = true; // Reset the flag
    digitalWrite(ledPin, LOW);
    Serial.print("Sensor deactivated at: ");
    Serial.print(millis() / 1000);
    Serial.println(" seconds");
    Serial.println("Waiting for next activation...");
  }

  delay(100); // Small delay to avoid bouncing issues
}
