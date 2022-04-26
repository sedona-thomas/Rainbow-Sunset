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
  dht = DhtSensor(12);
  photoresistor = Photoresistor(13);
  circleLights = Neopixel(15);
  red = Light(36);
  orange = Light(37);
  yellow = Light(38);
  green = Light(39);
  blue = Light(32);
  purple = Light(33);
  setupSerial();
}

/**
 * The run method runs the stained glass art
 */
void Glass::run()
{
  serialValues();
}

/**
 * The setupSerial method sets up the serial connection over wifi
 */
void Glass::setupSerial()
{
  USE_SERIAL.begin(BAUD_RATE);
}

/**
 * The serialValues method sends values of sensors to the serial port
 */
void Glass::serialValues()
{
  USE_SERIAL.println(dht.json().c_str());
  USE_SERIAL.println(photoresistor.json().c_str());
}
