#include "light.h"

/**
 * Light constructor makes a light object
 */
Light::Light()
{
    pin = 12;
}

/**
 * Light constructor makes a light object
 *
 * @param pin_in the pin that the lights are connected to
 */
Light::Light(int pin_in)
{
    pin = pin_in;
}

/**
 * The setup method sets up the lights
 */
void Light::setup()
{
    ledcSetup(CHN, FRQ, PWM_BIT);
    ledcAttachPin(pin, CHN);
    ledcWrite(CHN, 0);
    delay(10);
}

/**
 * The run method runs the lights
 */
void Light::run()
{
    runLoop();
}

/**
 * The runLoop method lights up each pixel in a row and keeps them on
 */
void Light::runLoop()
{
    fadeIn();
    fadeOut();
}

/**
 * The fadeIn method fades in the light
 */
void Light::fadeIn()
{
    for (int i = 0; i < 255; i++)
    {
        ledcWrite(CHN, i);
        delay(10);
    }
}

/**
 * The fadeIn method fades out the light
 */
void Light::fadeOut()
{
    for (int i = 255; i > -1; i--)
    {
        ledcWrite(CHN, i);
        delay(10);
    }
}

/**
 * The set method sets the light value
 */
void Light::set(int i)
{
    ledcWrite(CHN, i);
    delay(10);
}

/**
 * The runLoopMax method lights up each pixel in a row and keeps them on with a max brightness
 */
void Light::runLoopMax(int max)
{
    fadeInMax(max);
    fadeOutMax(max);
}

/**
 * The fadeInMax method fades in the light with a max brightness
 */
void Light::fadeInMax(int max)
{
    for (int i = 0; i < max; i++)
    {
        ledcWrite(CHN, i);
        delay(10);
    }
}

/**
 * The fadeInMax method fades out the light with a max brightness
 */
void Light::fadeOutMax(int max)
{
    for (int i = max; i > -1; i--)
    {
        ledcWrite(CHN, i);
        delay(10);
    }
}