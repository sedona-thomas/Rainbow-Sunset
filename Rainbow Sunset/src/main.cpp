/**
 * The main.cpp file manages the functionality of the ESP32
 *
 * @author Sedona Thomas
 * @version 4.0.0
 */

#include <Arduino.h>
#include <string>
#include "testing.h"

#define BAUD_RATE 115200 /**< baud rate of wifi communication */

void setupSerial()
{
  Serial.begin(BAUD_RATE);
  Serial.println("Setup Serial");
}

void runTests()
{
  Serial.println("Running Tests:");
  Testing test = Testing();
  // test.testDhtSensor();
  // test.testNeopixel();
  test.testLight(); // too much for the ESP32 to handle, endless restart with others
  // test.testPhotoresistor(); // not using, likely fried the circutry
}

void setup()
{
  Serial.println("Setup:");
  setupSerial();
  delay(SECOND);
}

void loop()
{
  Serial.println("Loop:");
  runTests();
  Serial.println("");
  delay(SECOND);
}
