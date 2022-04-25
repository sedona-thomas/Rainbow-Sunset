#ifndef __POTENTIOMETER_H__
#define __POTENTIOMETER_H__

#include "sensor.h"

/**
 * The Potentiometer class controls the necessary features of a potentiometer
 *
 * @author Sedona Thomas
 * @version 3.0.0
 */
class Potentiometer : public Sensor
{
public:
  Potentiometer();
  Potentiometer(int);
  Potentiometer(std::string, int);
  void read();
};

#endif
