#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// LCD Address (Most LCDs use 0x27 or 0x3F)
LiquidCrystal_I2C lcd(0x27, 16, 2);

const int gasSensor = A0;
const int buzzer = 8;

// Change this value according to your sensor
const int threshold = 400;

void setup()
{
  pinMode(buzzer, OUTPUT);
  digitalWrite(buzzer, LOW);

  lcd.init();
  lcd.backlight();

  lcd.setCursor(0,0);
  lcd.print("Gas Detector");
  lcd.setCursor(0,1);
  lcd.print("Initializing");

  delay(2000);
  lcd.clear();

  Serial.begin(9600);
}

void loop()
{
  int gasValue = analogRead(gasSensor);

  Serial.print("Gas Value: ");
  Serial.println(gasValue);

  lcd.setCursor(0,0);
  lcd.print("Gas:");
  lcd.print(gasValue);
  lcd.print("    ");

  if(gasValue > threshold)
  {
    digitalWrite(buzzer, HIGH);

    lcd.setCursor(0,1);
    lcd.print("GAS LEAK!      ");
  }
  else
  {
    digitalWrite(buzzer, LOW);

    lcd.setCursor(0,1);
    lcd.print("Air Safe       ");
  }

  delay(500);
}