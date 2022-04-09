#ifndef __GLASS_H__
#define __GLASS_H__

#include <Arduino.h>
#include <string>
#include "esp32_screen.h"
// #include "sensors/button.h"
// #include "sensors/joystick.h"
// #include "sensors/potentiometer.h"
// #include "motors/brush.h"
// #include "motors/servo.h"
// #include "motors/step.h"

#define SECOND 1000 /**< miliseconds (1000 miliseconds == 1 second) */

/**
 * The Glass class controls the stained glass sunset
 *
 * @author Sedona Thomas
 * @version 1.0.0
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