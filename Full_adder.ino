byte a,b,c;
void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);

  pinMode(7,INPUT);
  pinMode(8,INPUT);
  pinMode(9,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  a = digitalRead(7);
  b = digitalRead(8);
  c = digitalRead(9);

  digitalWrite(13, (a&b) | (b&c) | (a&c) );
  digitalWrite(12, a^b^c);   
}
