#include "four_pin_sensor.h"

/**
 * FourPinSensor constructor makes a four pin sensor object
 */
FourPinSensor::FourPinSensor()
{
  setupDefault();
}

/**
 * FourPinSensor constructor makes a four pin sensor object
 *
 * @param pin_in the pin that the four pin sensor is connected to
 */
FourPinSensor::FourPinSensor(int pin_in)
{
  setupDefault();
  pin = pin_in;
}

/**
 * FourPinSensor constructor makes a four pin sensor object
 *
 * @param name_in the four_pin_sensor name
 * @param pin_in the pin that the four pin sensor is connected to
 */
FourPinSensor::FourPinSensor(std::string name_in, int pin_in)
{
  setupDefault();
  name = name_in;
  pin = pin_in;
}

/**
 * FourPinSensor constructor makes a four pin sensor object
 *
 * @param sensor_in the sensor type
 * @param name_in the four_pin_sensor name
 * @param pin_in the pin that the four pin sensor is connected to
 */
FourPinSensor::FourPinSensor(std::string sensor_in, std::string name_in, int pin_in)
{
  setupDefault();
  sensor = sensor_in;
  name = name_in;
  pin = pin_in;
}

/**
 * The setupDefault method sets up the default sensor state
 */
void FourPinSensor::setupDefault()
{
  sensor = "four_pin_sensor";
  name = "";
  pin = 12;
  value = 0;
}

/**
 * The read method reads the sensor value
 */
void FourPinSensor::read()
{
#if ANALOG
  value = analogRead(pin);
#else
  value = digitalRead(pin);
#endif
}