String value;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.setTimeout(1000);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {

  if (Serial.available()) {

    // read the most recent byte (which will be from 0 to 255):

    value = Serial.readString();
    Serial.println(value);

    if (value == "blue")
    {
      digitalWrite(7, HIGH);
      digitalWrite(8, LOW);
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
    }
    if (value == "red")
    {
      digitalWrite(8, HIGH);
      digitalWrite(7, LOW);
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
    }
    if (value == "yellow")
    {
      digitalWrite(13, HIGH);
      digitalWrite(8, LOW);
      digitalWrite(7, LOW);
      digitalWrite(12, LOW);
    }
    if (value == "green")
    {
      digitalWrite(12, HIGH);
      digitalWrite(8, LOW);
      digitalWrite(13, LOW);
      digitalWrite(7, LOW);
    }
  }
}
