// C++ code
//
float temp;
float vout;
float vout1;
int LED = 3;
int gasSensor;
int piezo = 2;

void setup()
{
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(LED, OUTPUT);
  pinMode(piezo, OUTPUT);
  Serial.begin (9600);
}

void loop()
{
  vout = analogRead(A1);
  vout1 = (vout / 1023.0) * 5000; 
  temp = (vout1 - 500) / 10; 
  gasSensor = analogRead(A2);
  if (temp >= 80)
      {
        digitalWrite (LED, HIGH) ;
      }
  else
      {
        digitalWrite (LED, LOW) ;
      }
  if (gasSensor >= 100)
      {
        digitalWrite (piezo, HIGH) ;
      }
  else
      {
        digitalWrite (piezo, LOW) ;
      }
  Serial.print ("In Degree = ");
  Serial.print (" ");
  Serial.print (temp);
  Serial.print ("\t");
  Serial.print ("GasSensor = ");
  Serial.print (" ");
  Serial.print (gasSensor);
  Serial.println ();
  
  delay(1000); // Wait for 1000 millisecond(s)
}