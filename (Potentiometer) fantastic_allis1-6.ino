int value = 0;
int out = 0;
void setup()
{
  pinMode(A0,INPUT);
  pinMode(9,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  value = analogRead(A0);
  Serial.println(value);
  out = map(value,0,1023,0,255);
  digitalWrite(9,out);
}
