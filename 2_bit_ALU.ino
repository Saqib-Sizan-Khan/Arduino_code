byte s0, s1, c;
int a, b, f;
void setup() {
  Serial.begin(9600);
  pinMode(12, INPUT);
  pinMode(11, INPUT);
  pinMode(10, INPUT);
}

void loop() {
  Serial.println("Enter the first number:");
  a = userValue();
  Serial.print("A = ");
  Serial.println(a);

  Serial.println("Enter the second number:");
  b = userValue();
  Serial.print("B = ");
  Serial.println(b);

  s1 = digitalRead(10);
  s0 = digitalRead(11);
  c = digitalRead(12);

  if (s1 == 0 && s0 == 0 && c == 0) {
    Serial.print("F = ");
    Serial.println(a);
  }
  else if (s1 == 0 && s0 == 0 && c == 1) {
    f = a + 1;
    Serial.print("F = ");
    Serial.print(a);
    Serial.print(" + 1 = ");
    Serial.println(f);
  }
  else if (s1 == 0 && s0 == 1 && c == 0) {
    f = a + b;
    Serial.print("F = ");
    Serial.print(a);
    Serial.print(" + ");
    Serial.print(b);
    Serial.print(" = ");
    Serial.println(f);
  }
  else if (s1 == 0 && s0 == 1 && c == 1) {
    f = a + b + 1;
    Serial.print("F = ");
    Serial.print(a);
    Serial.print(" + ");
    Serial.print(b);
    Serial.print(" + 1 = ");
    Serial.println(f);
  }
  else if (s1 == 1 && s0 == 0 && c == 0) {
    b = ~b;
    f = a + b;
    Serial.print("F = ");
    Serial.print(a);
    Serial.print(" + (");
    Serial.print(b);
    Serial.print(") = ");
    Serial.println(f);
  }
  else if (s1 == 1 && s0 == 0 && c == 1) {
    b = ~b;
    f = a + b + 1;
    Serial.print("F = ");
    Serial.print(a);
    Serial.print(" + (");
    Serial.print(b);
    Serial.print(") + 1 = ");
    Serial.println(f);
  }
  else if (s1 == 1 && s0 == 1 && c == 0) {
    f = a - 1;
    Serial.print("F = ");
    Serial.print(a);
    Serial.print(" - 1 = ");
    Serial.println(f);
  }
  else if (s1 == 1 && s0 == 1 && c == 1) {
    f = a;
    Serial.print("F = ");
    Serial.println(f);
  }
}

int userValue() {
  while (Serial.available() == 0);

  return Serial.parseInt();
}
