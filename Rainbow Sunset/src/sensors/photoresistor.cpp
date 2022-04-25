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
 * The brightness method determines the relative brightness measured by the photoresistor
 *
 * @return string describing the relative brightness
 */
std::string Photoresistor::brightness()
{
  if ((0 <= value) && (value < 500))
  {
    return "Dark";
  }
  else if (value < 1000)
  {
    return "Dim";
  }
  else if (value < 1500)
  {
    return "Light";
  }
  else if (value < 2000)
  {
    return "Bright";
  }
  else if (value <= 2500)
  {
    return "Very bright";
  }
  else if (value <= 3000)
  {
    return "Extremely bright";
  }
  else
  {
    return "Invalid Brightness";
  }
}