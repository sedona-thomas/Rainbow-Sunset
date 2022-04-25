#ifndef __BUTTON_H__
#define __BUTTON_H__

#include "serial_communication.h"
#include "sensor.h"
#include "DHT.h"

//#define DHTTYPE DHT11
#define DHTTYPE DHT22

/**
 * The Humidity class controls the necessary features of a humidity sensor
 *
 * @author Sedona Thomas
 * @version 1.0.0
 */
class Humidity
{
public:
  Humidity(){};
  Humidity(int);
  void read();
  void send();

private:
  DHT dht;
  float humidity;
  float temperature;
};

#endif
