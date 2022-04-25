#ifndef __SENSOR_H__
#define __SENSOR_H__

#include <Arduino.h>
#include <stdint.h>
#include <string>
#include <format>
#include "esp32_screen.h"

/**
 * The Sensor class controls the necessary features of a single value sensor
 *
 * @author Sedona Thomas
 * @version 4.0.0
 */
class Sensor
{
protected:
  std::string sensor;
  std::string name;
  uint8_t pin;
  uint8_t value;
  void setupDefault();

public:
  virtual void read() { value = analogRead(pin); };
  std::string json();
};

#endif
