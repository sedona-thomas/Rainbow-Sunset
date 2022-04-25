#include "sensor.h"

/**
 *  The json method returns a json representation of the sensor
 */
std::string Sensor::json()
{
    if (name.length() > 0)
    {
        return std::format("\"{}_{}_pin{}\":", sensor, name, pin, value);
    }
    else
    {
        return std::format("\"{}_pin{}\": {}", sensor, pin, value);
    }
}