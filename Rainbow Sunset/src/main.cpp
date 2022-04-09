/**
 * The main.cpp file manages the functionality of the ESP32
 *
 * @author Sedona Thomas
 * @version 1.0.0
 */

#include <Arduino.h>
#include "wifi_handler.h"

void setup()
{
  wifiSetup();
}

void loop()
{
  wifiLoop();
}