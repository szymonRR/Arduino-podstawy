#include <Wire.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_GFX.h>

// OLED display TWI address
#define OLED_ADDR   0x3C

Adafruit_SSD1306 display(-1);



void setup() {
  // initialize and clear display
  display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDR);
  display.clearDisplay();
  display.display();

  // display a pixel in each corner of the screen
  display.drawPixel(0, 0, WHITE);
  display.drawPixel(127, 0, WHITE);
  display.drawPixel(0, 31, WHITE);
  display.drawPixel(127, 31, WHITE);

  // display a line of text
  
  
  
  



  // update display with all of the above graphics
 
}

void loop() {
  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(10,5);
  display.print("25");
  display.setTextSize(1);
  display.print(char(247));
  //display.drawRect(37, 5, 5, 5, WHITE); 
  display.setTextSize(2);
  display.print("C");

display.display();

  
  display.startscrollright(0x00, 0x0F);
  delay(2300);
  display.stopscroll();
  delay(500);

}
