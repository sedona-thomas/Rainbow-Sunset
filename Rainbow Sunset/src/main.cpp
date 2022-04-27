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
#include "testing.h"

#define BAUD_RATE 115200 /**< baud rate of wifi communication */

// Glass artwork = Glass(); /**< stained glass artwork */

void setupSerial()
{
  Serial.begin(BAUD_RATE);
}

// void runArt()
// {
//   artwork.run();
//   std::string json = artwork.jsonValues();
//   Serial.println(json.c_str());
// }

void runTests()
{
  Testing test = Testing();
}

void setup()
{
  setupSerial();
  // artwork.setup();
  delay(SECOND);
}

void loop()
{
  // runArt();
  runTests();
  delay(SECOND);
}