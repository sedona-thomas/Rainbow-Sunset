#include "neopixel.h"

Freenove_ESP32_WS2812 strip = Freenove_ESP32_WS2812(LED_COUNT, PIN, CHANNEL, TYPE_GRB);

/**
 * The setup method sets up the neopixel state
 */
void Neopixel::setup()
{
    strip.begin();
    strip.setBrightness(10);
}

/**
 * The run method runs the neopixels
 */
void Neopixel::run()
{
    int m_color[5][3] = {{255, 0, 0}, {0, 255, 0}, {0, 0, 255}, {255, 255, 255}, {0, 0, 0}};
    for (int i = 0; i < LED_COUNT; i++)
    {
        strip.setLedColorData(i, m_color[3][0], m_color[3][1], m_color[3][2]);
        strip.show();
        delay(100);
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
        for (int i = 0; i < LED_COUNT; i++)
        {
            strip.setLedColorData(i, m_color[j][0], m_color[j][1], m_color[j][2]);
            strip.show();
            delay(100);
        }
        delay(500);
    }
}

/**
 * The runLoopSpeed method lights up each pixel in a row with given temperature and humidity
 */
void Neopixel::runLoopSpeed(float humidity, float temp)
{
    int m_color[5][3] = {{255, 0, 0}, {0, 255, 0}, {0, 0, 255}, {255, 255, 255}, {0, 0, 0}};
    int color = static_cast<int>(temp / 1) % 5;
    for (int i = 0; i < LED_COUNT; i++)
    {
        strip.setLedColorData(i, m_color[color][0], m_color[color][1], m_color[color][2]);
        strip.show();
        delay(humidity * 10);
    }
    delay(500);
}