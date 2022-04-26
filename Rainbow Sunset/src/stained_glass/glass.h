#ifndef __GLASS_H__
#define __GLASS_H__

#include <Arduino.h>
#include <string>
#include "../screen/esp32_screen.h"
#include "../sensors/photoresistor.h"
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

private:
  std::string name;

};

#endif