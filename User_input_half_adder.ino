String number;
int a;
int b,c;
void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,INPUT);
  pinMode(10,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  if(Serial.available())
  {
    number = Serial.readString();

    a = number.toInt();
  }
  b = (a >> 1)&1;
  c = (a >> 0)&1;

  digitalWrite(13,b^c);
  digitalWrite(12,b&c);
}
