#ifndef __FOUR_PIN_SENSOR_H__
#define __FOUR_PIN_SENSOR_H__

#include "sensor.h"

#define ANALOG true /**< whether sensor is read as analog or digital */

/**
 * The FourPinSensor class controls the necessary features of a four pin sensor
 *
 * @author Sedona Thomas
 * @version 1.0.0
 */
class FourPinSensor : public Sensor
{
public:
  FourPinSensor();
  FourPinSensor(int);
  FourPinSensor(std::string, int);
  FourPinSensor(std::string, std::string, int);
  void read();
};

#endif
