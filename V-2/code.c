const int trigPin = 2;
const int echoPin = 3;
long duration;
int distanceCm, distanceInch;
void setup()
{ 
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);

 pinMode(0, OUTPUT); // Connect Buzzer Pin D5

}
void loop()
{
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distanceCm= duration*0.034/2;
distanceInch = duration*0.0133/2;
delay (10);
// See the Ultrasonic Sensor Value in Serial Monitor
if(distanceInch < 10)  // You can Change the value 
{  
  digitalWrite(0, HIGH);  // Buzzer ON
}
else
{
    digitalWrite(0,LOW);  // Buzzer OFF
}
}
