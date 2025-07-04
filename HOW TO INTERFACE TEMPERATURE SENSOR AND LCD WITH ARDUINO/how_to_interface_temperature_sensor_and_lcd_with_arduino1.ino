//C++ code
//

#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 10, 9, 8, 7);

int degree;
double realdegree;
String lcdBuffer;

void setup() {
  lcd.begin(16, 2);
  degree = 0;
  realdegree = 0.0;
  lcd.print("Today's Temp:");
}

void loop() {
  degree = analogRead(A0);  
  
  realdegree = (double)degree/1024;
  realdegree *= 5;
  realdegree -= 0.5;
  realdegree *= 100;
  
  lcd.setCursor(0, 1);
  realdegree = (1.8) * (realdegree) + 32;
  String output = String (realdegree) + String ((char)178) + "F";
  lcd.print(output);
}