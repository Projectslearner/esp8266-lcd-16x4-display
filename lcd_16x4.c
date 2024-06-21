/*
    Project name : ESP8266 LCD 16x4 Display
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-lcd-16x4-display
*/

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x27 for a 16 chars and 4 line display
LiquidCrystal_I2C lcd(0x27, 16, 4);

void setup() {
  // Initialize the LCD
  lcd.begin();
  lcd.backlight(); // Turn on the backlight

  // Print initial messages to LCD
  lcd.setCursor(0, 0);
  lcd.print("ESP8266 LCD 16x4");
  lcd.setCursor(0, 1);
  lcd.print("Line 1");
  lcd.setCursor(0, 2);
  lcd.print("Line 2");
  lcd.setCursor(0, 3);
  lcd.print("Line 3");
}

void loop() {
  // Example of updating the LCD content in the loop
  // Clear the fourth line
  lcd.setCursor(0, 3);
  lcd.print("                "); // Clear the line
  
  delay(1000);
  
  // Write new content to the fourth line
  lcd.setCursor(0, 3);
  lcd.print("Updated Line 3");
  
  delay(1000);
}
