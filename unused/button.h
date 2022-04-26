#ifndef __BUTTON_H__
#define __BUTTON_H__

#include "sensor.h"

/**
 * The Button class controls the necessary features of a button
 *
 * @author Sedona Thomas
 * @version 5.0.0
 */
class Button : public Sensor
{
public:
  Button();
  Button(int);
  Button(std::string, int);
  void read();
};

#endif
