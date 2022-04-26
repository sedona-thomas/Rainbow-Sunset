#include "neopixel.h"

/**
 * Neopixel constructor makes a button object
 */
Neopixel::Neopixel()
{
    pin = 12;
    setup();
}

/**
 * Neopixel constructor makes a button object
 *
 * @param pin_in the pin that the button is connected to
 */
Neopixel::Neopixel(int pin_in)
{
    pin = pin_in;
    setup();
}

/**
 * The setup method sets up the neopixel state
 */
void Neopixel::setup()
{
    delayVal = 100;
    strip = Freenove_ESP32_WS2812(ledCount, pin, CHANNEL, TYPE_GRB);
    strip.begin();
    strip.setBrightness(10);
}

/**
 * The run method runs the neopixels
 */
void Neopixel::run()
{
    int m_color[5][3] = {{255, 0, 0}, {0, 255, 0}, {0, 0, 255}, {255, 255, 255}, {0, 0, 0}};
    for (int i = 0; i < ledCount; i++)
    {
        strip.setLedColorData(i, m_color[3][0], m_color[3][1], m_color[3][2]);
        strip.show();
        delay(delayVal);
    }
}

/**
 * The runChain method lights up each pixel in a row and keeps them on
 */
void Neopixel::runChain()
{
    int m_color[5][3] = {{255, 0, 0}, {0, 255, 0}, {0, 0, 255}, {255, 255, 255}, {0, 0, 0}};
    for (int j = 0; j < 5; j++)
    {
        for (int i = 0; i < ledCount; i++)
        {
            strip.setLedColorData(i, m_color[j][0], m_color[j][1], m_color[j][2]);
            strip.show();
            delay(delayVal);
        }
        delay(500);
    }
}