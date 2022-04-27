#include "dht_sensor.h"

/**
 * DhtSensor constructor makes a dht object
 */
DhtSensor::DhtSensor()
{
  pin = 12;
}

/**
 * DhtSensor constructor makes a dht object
 *
 * @param in_pin the pin that the dht sensor is connected to
 */
DhtSensor::DhtSensor(int in_pin)
{
  pin = in_pin;
}

/**
 * The read method reads dht sensor values
 */
void DhtSensor::read()
{
  DHT dht = DHT(pin, DHTTYPE);
  dht.begin();
  humidity = dht.readHumidity();
  temperature = dht.readTemperature(FAHRENHEIT);
  Serial.println(humidity);
}

/**
 * The json method returns a json representation of the sensor
 *
 * @return json representation of the sensor
 */
std::string DhtSensor::json()
{
  read();
  int p = pin;
  if (isnan(humidity) || isnan(temperature))
  {
    return "\"dht_sensor_pin" + std::to_string(p) + "\": " + "Failed to read DHT sensor";
  }
  else
  {
    return "\"dht_sensor_pin" + std::to_string(p) + "\": {humidity: " + std::to_string(humidity) +
           ", temperature " + std::to_string(temperature) + "}";
  }
}

/**
 * The getHumidity method returns the current humidity
 *
 * @return Current humidity
 */
float DhtSensor::getHumidity()
{
  return humidity;
}

/**
 * The getTemperature method returns the current temperature
 *
 * @return Current temperature
 */
float DhtSensor::getTemperature()
{
  return temperature;
}