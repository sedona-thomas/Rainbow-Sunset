#include "dht_sensor.h"

/**
 * DhtSensor constructor makes a dht object
 */
DhtSensor::DhtSensor()
{
  dht = dht(12, DHTTYPE);
  dht.begin();
}

/**
 * DhtSensor constructor makes a dht object
 *
 * @param pin the pin that the dht sensor is connected to
 */
DhtSensor::DhtSensor(int pin)
{
  dht = dht(pin, DHTTYPE);
  dht.begin();
}

/**
 * The read method reads dht sensor values
 */
void DhtSensor::read()
{
  humidity = dht.readHumidity();
  temperature = dht.readTemperature(FAHRENHEIT);
}

/**
 *  The json method returns a json representation of the sensor
 */
std::string DhtSensor::json()
{
  read();
  if (isnan(humidity) || isnan(temperature))
  {
    return "Failed to read DHT sensor";
  }
  else
  {
    return std::format("\"dht_sensor_pin{}\": {humidity: {}, temperature {}}", pin, humidity, temperature);
  }
}