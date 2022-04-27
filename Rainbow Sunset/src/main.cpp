/**
 * The main.cpp file manages the functionality of the ESP32
 *
 * @author Sedona Thomas
 * @version 1.0.0
 */

#include <Arduino.h>
#include <string>
#include "stained_glass/glass.h"
#include "testing.h"

#define BAUD_RATE 115200 /**< baud rate of wifi communication */

// Glass artwork = Glass(); /**< stained glass artwork */

void setupSerial()
{
  Serial.begin(BAUD_RATE);
  Serial.println("Setup Serial");
}

// void runArt()
// {
//   artwork.run();
//   std::string json = artwork.jsonValues();
//   Serial.println(json.c_str());
// }

void runTests()
{
  Serial.println("Running Tests:");
  Testing test = Testing();
  test.testDhtSensor();
  test.testNeopixel();

  // test.testLight(); // too much for the ESP32 to handle, endless restart
  // test.testPhotoresistor(); // not using, likely fried the circutry
}

void setup()
{
  Serial.println("Setup:");
  setupSerial();
  // artwork.setup();
  delay(SECOND);
}

void loop()
{
  Serial.println("Loop:");
  // runArt();
  runTests();
  Serial.println("");
  delay(SECOND);
}