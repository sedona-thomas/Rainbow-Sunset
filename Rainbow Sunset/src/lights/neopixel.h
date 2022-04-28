#ifndef __NEOPIXEL_H__
#define __NEOPIXEL_H__

#include <Arduino.h>
#include <stdint.h>
#include <string>
#include "Freenove_WS2812_Lib_for_ESP32.h"

#define CHANNEL 0    /**< RMT module channel */
#define LED_COUNT 25 /**< number of leds */

#define PIN 13 /**< Neopixel GPIO pin */

/**
 * The Neopixel class controls a group of neopixels
 *
 * @author Sedona Thomas
 * @version 1.0.0
 */
class Neopixel
{
public:
    Neopixel(){};
    void setup();
    void run();
    void runChain();
};

#endif