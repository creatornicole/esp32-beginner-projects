/**************************************************************************
Scrolling Text on OLED.
With help from: https://randomnerdtutorials.com/esp32-ssd1306-oled-display-arduino-ide/

Author: Nicole Gottschall
Date: 2023-05-10
 **************************************************************************/

#include <Wire.h> //to use I2C
#include <Adafruit_GFX.h> //to write to display
#include <Adafruit_SSD1306.h> //to write to display

//define OLED width and height
#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 32 // OLED display height, in pixels

//Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
//Initialize a display object with width and height with I2C communication protocol (&Wire)
//-1 means OLED doesn't have RESET pin (if RESET pin exists -> pass GPIO number as parameter)
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {
  Serial.begin(115200);

  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
  }

  //give display enough time for initialization before displaying text
  delay(2000);

  //clear buffer
  display.clearDisplay();

  //set text properties
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0, 0);

  //set static text
  display.println("Yippie Ya Yeah!");

  //show text on OLED
  display.display();

  delay(100);
}

void loop() {
 //scroll in various directions, pausing in-between
 //left to right
 display.startscrollright(0x00, 0x0F);

 delay(2000);
 display.stopscroll();
 delay(1000);

 //right to left
 display.startscrollleft(0x00, 0x0F);
 
 delay(2000);
 display.stopscroll();
 delay(1000);

 //left bottom corner to right upper corner
 display.startscrolldiagright(0x00, 0x07);

 delay(2000);

 //right bottom corner to left upper corner
 display.startscrolldiagleft(0x00, 0x07);

 delay(2000);
 display.stopscroll();
 delay(1000);
}
