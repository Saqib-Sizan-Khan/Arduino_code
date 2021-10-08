int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  
  for (int fadeValue = 0; fadeValue <= 255; fadeValue += 10) {
    analogWrite(ledPin, fadeValue);
    delay(1000);
  }

  for (int fadeValue = 255; fadeValue >= 0; fadeValue -= 10) {
    analogWrite(ledPin, fadeValue);
    delay(1000);
  }
}
