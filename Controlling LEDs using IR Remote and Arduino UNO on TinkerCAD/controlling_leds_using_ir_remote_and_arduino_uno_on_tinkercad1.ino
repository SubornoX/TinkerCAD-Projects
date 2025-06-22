// C++ code
//


#include<IRremote.h>

int ir_pin = 12;
int blue=6;
int green=5;
int red = 4;


           
IRrecv recv(ir_pin);
decode_results results;



void setup() {
  pinMode(blue, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
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
    digitalWrite(blue, HIGH);;
    delay(1000);
  }
  else if (results.value == 16718055 ){
    digitalWrite(blue, HIGH);;
  }
  else if (results.value == 16743045){
    digitalWrite(green, HIGH);
  }
  else if (results.value == 16716015){
    digitalWrite(red, HIGH);
  }

}
