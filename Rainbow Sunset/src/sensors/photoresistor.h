#ifndef __BUTTON_H__
#define __BUTTON_H__

#include "serial_communication.h"
#include "sensor.h"
#include "DHT.h"

//#define DHTTYPE DHT11
#define DHTTYPE DHT22

/**
 * The Photoresistor class controls the necessary features of a light sensor
 *
 * @author Sedona Thomas
 * @version 1.0.0
 */
class Photoresistor
{
public:
  Photoresistor(){};
  Photoresistor(int);
  void read();
  void send();

private:
  DHT dht;
  float photoresistor;
  float temperature;
};

#endif
