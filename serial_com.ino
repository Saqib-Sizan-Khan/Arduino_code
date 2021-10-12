int a = 61;
char b = 'S';
String c = "Saqib";
double d = 55.123;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(a);
  Serial.print("    ");
  Serial.print(b);
  Serial.print("    ");
  Serial.print(c);
  Serial.print("    ");
  Serial.print(d,2);
  Serial.println();

  Serial.print(a,DEC);
  Serial.print("    ");
  Serial.print(a,BIN);
  Serial.print("    ");
  Serial.print(a,OCT);
  Serial.print("    ");
  Serial.print(a,HEX);
  Serial.print("    ");
  Serial.println();

  Serial.print("DEC");
  Serial.print("    ");
  Serial.print("BIN");
  Serial.println();

  for (int i=0; i<10; i++) {
    Serial.print(i,DEC);
    Serial.print("    ");
    Serial.print(i,BIN);
    Serial.println();
    delay(200);
  }

  Serial.end();
}
