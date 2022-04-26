#include "glass.h"

/**
 * Glass constructor makes a stained glass art object
 */
Glass::Glass()
{
  name = "stained glass";
}

/**
 * Glass constructor makes a stained glass art object
 *
 * @param name_in the stained glass art name
 */
Glass::Glass(std::string _name)
{
  name = _name;
}

/**
 * The setup method sets up the stained glass art
 */
void Glass::setup()
{
  photoresistor = Photoresistor(13);
  // circleLights = Neopixel(15);
  red = Light(36);
  red.setup();
  // orange = Light(37);
  // yellow = Light(38);
  // green = Light(39);
  // blue = Light(32);
  // purple = Light(33);
}

/**
 * The run method runs the stained glass art
 */
void Glass::run()
{
  // circleLights.run();
  red.run();
}

/**
 * The serialValues method sends values of sensors to the serial port
 */
std::string Glass::jsonValues()
{
  return "{ " + photoresistor.json() + " }";
}
