#include "button.h"

/**
 * Button constructor makes a button object
 */
Button::Button()
{
  setupDefault();
}

/**
 * Button constructor makes a button object
 *
 * @param pin_in the pin that the button is connected to
 */
Button::Button(int pin_in)
{
  setupDefault();
  pin = pin_in;
}

/**
 * Button constructor makes a button object
 *
 * @param name_in the button name
 * @param pin_in the pin that the button is connected to
 */
Button::Button(std::string name_in, int pin_in)
{
  setupDefault();
  name = name_in;
  pin = pin_in;
}

/**
 * The setupDefault method sets up the default sensor state
 */
void Button::setupDefault()
{
  sensor = "button";
  name = "";
  pin = 12;
  value = 0;
}

/**
 * The read method reads the button value
 */
void Button::read()
{
  pinMode(pin, INPUT_PULLUP);
  value = digitalRead(pin);
}