#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int a = 61;
String b = "I am Sizan ";

void setup() {
  lcd.begin(16, 2);

  lcd.print(b);
  lcd.scrollDisplayLeft();
  lcd.print(a);

}
void loop() { }
