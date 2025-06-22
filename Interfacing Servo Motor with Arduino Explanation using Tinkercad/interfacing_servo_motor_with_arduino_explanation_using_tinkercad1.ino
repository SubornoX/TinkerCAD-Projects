#include <Servo.h>
Servo myservo;
int i;

void setup()
{
  myservo.attach(3);
}

void loop()
{
  for (i = 0; i <= 180; i++) {
    myservo.write(i);  
    delay(50);
}

  
  delay(1000); 
  
 
  for (i = 180; i >= 0; i--) {
    myservo.write(i);  
    delay(50);
}
  
  delay(2000);
}