char value;
int brightness;
int ledPin = 13;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {

  if (Serial.available()) {

    value = Serial.read();

    Serial.write(value);
    Serial.println();

    brightness = value - 48;

    if (brightness >= 0 && brightness <= 9)
    {
      digitalWrite(ledPin, HIGH);
      delay(brightness*1000);
      digitalWrite(ledPin, LOW);
    }

    else
    {
      Serial.println("Invalid Input");
    }
  }
}
