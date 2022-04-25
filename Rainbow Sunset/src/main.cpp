/**
 * The main.cpp file manages the functionality of the ESP32
 *
 * @author Sedona Thomas
 * @version 1.0.0
 */

#include <Arduino.h>
#include "wifi/wifi_handler.h"
#include "wifi/no_wifi.h"

void setup()
{
  // wifiSetup();
  noWifiSetup();
}

void loop()
{
  // wifiLoop();
  noWifiLoop();
}