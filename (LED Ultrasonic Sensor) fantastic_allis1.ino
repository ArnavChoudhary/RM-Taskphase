const int trigPin = 10;
const int echoPin = 9;

float duration, distance;

void setup()
{
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  
  Serial.begin(9600);
  Serial.println("setup is complete");
  
  pinMode(4,OUTPUT);
}

void loop()
{
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  
  digitalWrite(trigPin,LOW);
  
  duration = pulseIn(echoPin,HIGH);
  
  distance = (duration * 0.343)/2;
  
  Serial.println(distance);
  delay(100);
  
  if (15 < distance < 50)
  {
    digitalWrite(4,HIGH);
  }  
  else
  {
    digitalWrite(4,LOW);
  }
} 
  
    
  
