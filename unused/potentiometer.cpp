#include "potentiometer.h"

/**
 * Potentiometer constructor makes a potentiometer object
 */
Potentiometer::Potentiometer()
{
  setupDefault();
}

/**
 * Potentiometer constructor makes a potentiometer object
 *
 * @param pin_in the pin that the potentiometer is connected to
 */
Potentiometer::Potentiometer(int pin_in)
{
  setupDefault();
  pin = pin_in;
}

/**
 * Potentiometer constructor makes a potentiometer object
 *
 * @param name_in the potentiometer name
 * @param pin_in the pin that the potentiometer is connected to
 */
Potentiometer::Potentiometer(std::string name_in, int pin_in)
{
  setupDefault();
  name = name_in;
  pin = pin_in;
}

/**
 * The setupDefault method sets up the default sensor state
 */
Potentiometer::setupDefault()
{
  sensor = "potentiometer";
  name = "";
  pin = 12;
  value = 0;
}

/**
 * The read method reads potentiometer value
 */
void Potentiometer::read()
{
  value = analogRead(pin);
};