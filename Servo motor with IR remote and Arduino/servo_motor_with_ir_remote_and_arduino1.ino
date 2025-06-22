#include <Servo.h>
#include <IRremote.h>

Servo Myservo;
int pos;

IRrecv recv(5);
decode_results results;



void setup() {
  Myservo.attach(3);
  Serial.begin(9600);
  recv.enableIRIn();
  Serial.println("IR receiver ready.");
}

void loop() {

  if (recv.decode(&results)){
    Serial.print("Received Code:");
    Serial.println(results.value,DEC);
    recv.resume();
  }

  if (results.value == 16724175 ){
    Myservo.write(45);
    delay(1000);
  }
  else if (results.value == 16718055 ){
    Myservo.write(90);
    delay(1000);
  }
  else if (results.value == 16743045){
    Myservo.write(135);
    delay(1000);
  }
  else if (results.value == 16716015){
    Myservo.write(180);
    delay(1000);
  }
  else if (results.value == 16738455){
    Myservo.write(0);
    delay(1000);
  }

}
