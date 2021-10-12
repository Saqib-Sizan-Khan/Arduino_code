byte a;
void setup() {
  // put your setup code here, to run once:
  pinMode(13,INPUT);
  pinMode(10,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  a = digitalRead(13);

  if(a==HIGH)
  {
    digitalWrite(10,HIGH);
  }
  else
  {
    digitalWrite(10,LOW);
  }
}
