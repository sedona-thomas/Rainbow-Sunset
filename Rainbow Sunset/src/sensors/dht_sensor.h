#ifndef __DHT_SENSOR_H__
#define __DHT_SENSOR_H__

#include <sstream>
#include "DHT.h"

//#define DHTTYPE DHT11
#define DHTTYPE DHT22

#define FAHRENHEIT true

namespace std
{
  template <typename T>
  std::string to_string(const T &n)
  {
    std::ostringstream s;
    s << n;
    return s.str();
  }
}

/**
 * The DhtSensor class controls the necessary features of a humidity sensor
 *
 * @author Sedona Thomas
 * @version 2.0.0
 */
class DhtSensor
{
public:
  DhtSensor();
  DhtSensor(int);
  DhtSensor(std::string, int);
  void read();
  std::string json();

private:
  uint8_t pin;
  float humidity;
  float temperature;
};

#endif
