#include "photoresistor.h"

/**
 * Photoresistor constructor makes a photoresistor object
 */
Photoresistor::Photoresistor()
{
  setupDefault();
}

/**
 * Photoresistor constructor makes a photoresistor object
 *
 * @param pin_in the pin that the photoresistor is connected to
 */
Photoresistor::Photoresistor(int pin_in)
{
  setupDefault();
  pin = pin_in;
}

/**
 * Photoresistor constructor makes a photoresistor object
 *
 * @param name_in the photoresistor name
 * @param pin_in the pin that the photoresistor is connected to
 */
Photoresistor::Photoresistor(std::string name_in, int pin_in)
{
  setupDefault();
  name = name_in;
  pin = pin_in;
}

/**
 * The setupDefault method sets up the default sensor state
 */
void Photoresistor::setupDefault()
{
  sensor = "photoresistor";
  name = "";
  pin = 12;
  value = 0;
}

/**
 * The read method reads the photoresistor value
 */
void Photoresistor::read()
{
  value = analogRead(pin);
}

/**
 * The json method returns a json representation of the sensor
 *
 * @return json representation of the sensor
 */
std::string Photoresistor::json()
{
  read();
  int p = pin;
  int v = value;
  if (name.length() > 0)
  {
    return "\"" + sensor + "_" + name + "_pin" + std::to_string(p) + "\": " + std::to_string(v);
  }
  else
  {
    return "\"" + sensor + "_pin" + std::to_string(p) + "\": " + std::to_string(v);
  }
}

/**
 * The brightness method determines the relative brightness measured by the photoresistor with an input of 5V
 *
 * @return string describing the relative brightness
 */
std::string Photoresistor::brightness()
{
  if ((0 <= value) && (value < 50))
  {
    return "Extremely bright";
  }
  else if (value < 70)
  {
    return "Very bright";
  }
  else if (value < 110)
  {
    return "Bright";
  }
  else if (value < 140)
  {
    return "Light";
  }
  else if (value <= 180)
  {
    return "Dim";
  }
  else if (value <= 220)
  {
    return "Dark";
  }
  else
  {
    return "Extremely Dark";
  }
}

/**
 * The getValue method returns the photoresistor value
 */
uint8_t Photoresistor::getValue()
{
  return value;
}