#ifndef __PHOTORESISTOR_H__
#define __PHOTORESISTOR_H__

#include <Arduino.h>
#include <stdint.h>
#include <string>
#include <sstream>
#include "../helpers/to_string.h"

/**
 * The Photoresistor class controls the necessary features of a light sensor
 *
 * @author Sedona Thomas
 * @version 2.0.0
 */
class Photoresistor
{
public:
  Photoresistor();
  Photoresistor(int);
  Photoresistor(std::string, int);
  void read();
  std::string json();
  std::string brightness();

private:
  std::string sensor;
  std::string name;
  uint8_t pin;
  uint8_t value;
  void setupDefault();
};

#endif
