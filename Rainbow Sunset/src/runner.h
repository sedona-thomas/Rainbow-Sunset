#ifndef __RUNNER_H__
#define __RUNNER_H__

#include <Arduino.h>
#include <cmath>
#include "sensors/photoresistor.h"
#include "sensors/dht_sensor.h"
#include "lights/neopixel.h"
#include "lights/light.h"

#define SECOND 1000 /**< miliseconds (1000 miliseconds == 1 second) */

/**
 * The Runner class controls the stained glass sunset
 *
 * @author Sedona Thomas
 * @version 3.0.0
 */
class Runner
{
public:
    Runner(){};
    void runAll();
    void runNeopixel();
    void runLight();
};

#endif