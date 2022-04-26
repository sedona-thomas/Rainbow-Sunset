/**
 * The main.cpp file manages the functionality of the ESP32
 *
 * @author Sedona Thomas
 * @version 1.0.0
 */

#include <Arduino.h>
#include <string>
#include "stained_glass/glass.h"
#include "lights/light.h"

#define USE_SERIAL Serial /**< serial communication */
#define BAUD_RATE 115200  /**< baud rate of wifi communication */

Glass artwork = Glass(); /**< stained glass artwork */

Light red = Light(36);

void setup()
{
  USE_SERIAL.begin(115200);
  USE_SERIAL.println("Setup:");
  artwork.setup();
  delay(SECOND * 5);
}

void loop()
{
  USE_SERIAL.println("Loop:");

  artwork.run();
  std::string json = artwork.jsonValues();
  USE_SERIAL.println(json.c_str());

  delay(SECOND * 5);
}