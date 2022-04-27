#ifndef __TESTING_H__
#define __TESTING_H__

#include <Arduino.h>
#include "sensors/photoresistor.h"
#include "sensors/dht_sensor.h"
#include "lights/neopixel.h"
#include "lights/light.h"

#define SECOND 1000 /**< miliseconds (1000 miliseconds == 1 second) */

/**
 * The Testing class controls the stained glass sunset
 *
 * @author Sedona Thomas
 * @version 1.0.0
 */
class Testing
{
public:
    Testing(){};
    void setup();
    void testAll();
    void testDhtSensor();
    void testPhotoresistor();
    void testNeopixel();
    void testLight();
};

#endif