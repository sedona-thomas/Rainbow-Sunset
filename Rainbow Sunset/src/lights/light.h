#ifndef __LIGHT_H__
#define __LIGHT_H__

#include <Arduino.h>
#include <stdint.h>
#include <string>

#define CHN 0     /**< pulse width modulation channel */
#define FRQ 1000  /**< pulse width modulation frequency */
#define PWM_BIT 8 /**< pulse width modulation precision */

/**
 * The Light class controls a group of lights
 *
 * @author Sedona Thomas
 * @version 1.0.0
 */
class Light
{
public:
    Light();
    Light(int);
    void setup();
    void run();
    void runLoop();

private:
    uint8_t pin;
    void fadeIn();
    void fadeOut();
};

#endif