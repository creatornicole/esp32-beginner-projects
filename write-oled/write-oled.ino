/**************************************************************************
Display Hello, world! message in the OLED display.
With help from: https://randomnerdtutorials.com/esp32-ssd1306-oled-display-arduino-ide/

Author: Nicole Gottschall
Date: 2023-05-10
 **************************************************************************/

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 32 // OLED display height, in pixels

//Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {
  Serial.begin(115200);

  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
  }
 
  //pause for 2 seconds
  delay(2000); 
  //clear buffer
  display.clearDisplay();

  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0, 10);

  //display static text
  display.println("Hello, world!");
  //show display buffer on the screen
  display.display(); //MUST call display() after drawing command to make them visible on screen!
}

void loop() {
 
}
