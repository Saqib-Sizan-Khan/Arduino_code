byte a,b;
void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,INPUT);
  pinMode(10,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  a = digitalRead(11);
  b = digitalRead(10);
  
  digitalWrite(13,a^b);
  digitalWrite(12,a&b);
}
