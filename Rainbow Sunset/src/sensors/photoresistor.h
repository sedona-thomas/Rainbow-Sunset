#ifndef __PHOTORESISTOR_H__
#define __PHOTORESISTOR_H__

#include "sensor.h"

/**
 * The Photoresistor class controls the necessary features of a light sensor
 *
 * @author Sedona Thomas
 * @version 2.0.0
 */
class Photoresistor : public Sensor
{
public:
  Photoresistor();
  Photoresistor(int);
  Photoresistor(std::string, int);
  void read();
  std::string brightness();
};

#endif
