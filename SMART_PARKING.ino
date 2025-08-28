#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// LCD I2C address (usually 0x27 or 0x3F, check yours)
LiquidCrystal_I2C lcd(0x27, 16, 2);

// IR sensor pins
#define SLOT1 2
#define SLOT2 3
#define SLOT3 4
#define SLOT4 5

int s1, s2, s3, s4;

void setup() {
  lcd.init();
  lcd.backlight();
  
  pinMode(SLOT1, INPUT);
  pinMode(SLOT2, INPUT);
  pinMode(SLOT3, INPUT);
  pinMode(SLOT4, INPUT);
  
  lcd.setCursor(0,0);
  lcd.print(" Smart Parking ");
  lcd.setCursor(0,1);
  lcd.print("   System ON   ");
  delay(2000);
  lcd.clear();
}

void loop() {
  // Read IR sensors (LOW = Car Present, HIGH = Empty)
  s1 = digitalRead(SLOT1);
  s2 = digitalRead(SLOT2);
  s3 = digitalRead(SLOT3);
  s4 = digitalRead(SLOT4);

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("S1:");
  lcd.print(s1 == LOW ? "Full " : "Empty");
  lcd.setCursor(8,0);
  lcd.print("S2:");
  lcd.print(s2 == LOW ? "Full " : "Empty");

  lcd.setCursor(0,1);
  lcd.print("S3:");
  lcd.print(s3 == LOW ? "Full " : "Empty");
  lcd.setCursor(8,1);
  lcd.print("S4:");
  lcd.print(s4 == LOW ? "Full " : "Empty");

  delay(1000);
}
