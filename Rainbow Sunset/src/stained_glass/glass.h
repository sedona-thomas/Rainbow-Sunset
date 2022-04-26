#ifndef __GLASS_H__
#define __GLASS_H__

#include <Arduino.h>
#include <string>
#include "../screen/esp32_screen.h"
#include "../sensors/photoresistor.h"
#include "../sensors/dht_sensor.h"
#include "../lights/neopixel.h"
#include "../lights/light.h"

#define SECOND 1000 /**< miliseconds (1000 miliseconds == 1 second) */

/**
 * The Glass class controls the stained glass sunset
 *
 * @author Sedona Thomas
 * @version 2.0.0
 */
class Glass
{
public:
  Glass();
  Glass(std::string);
  void setup();
  void run();
  std::string jsonValues();

private:
  std::string name;
  Photoresistor photoresistor;
  Neopixel circleLights;
  Light red;
  Light orange;
  Light yellow;
  Light green;
  Light blue;
  Light purple;
};

#endif