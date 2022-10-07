void setup()
{
  Serial.begin(9600);
  pinMode(12,INPUT);
  pinMode(8,OUTPUT);
  pinMode(4,OUTPUT);
}

void loop()
{
  //Turning Light on off using Motion detection
  if(digitalRead(12)==HIGH)
     digitalWrite(8, 1);
   else
     digitalWrite(8, 0);
   //Gas detector
  float gas=analogRead(A0);
  if(gas > 300){
    tone(4, 1000);
    delay(200);
    noTone(4);
  }
  else
    digitalWrite(4, LOW);
  delay(1000);
}