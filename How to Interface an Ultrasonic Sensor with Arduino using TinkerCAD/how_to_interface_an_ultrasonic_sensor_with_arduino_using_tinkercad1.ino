int trigPin = 5;
int echoPin = 6;
long time;
int distance;
void setup()
{
  pinMode(5, OUTPUT);
  pinMode(6, INPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(5, LOW);
  delayMicroseconds(2); 
  
  digitalWrite(5, HIGH);
  delayMicroseconds(10);
  digitalWrite(5, LOW);
  
  time = pulseIn(6, HIGH);
  distance = time*0.034/2;
  
  Serial.print("Distance: ");
  Serial.println(distance);
 }