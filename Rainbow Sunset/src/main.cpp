/**
 * The main.cpp file manages the functionality of the ESP32
 *
 * @author Sedona Thomas
 * @version 1.0.0
 */

#include <Arduino.h>

Glass artwork = Glass(); /**< stained glass artwork */

void setup()
{
  setupScreen();
  resetScreen();
  artwork.setup();
  delay(SECOND * 5);
}

void loop()
{
  rainbowBackground();
  artwork.run();
  delay(SECOND * 5);
}