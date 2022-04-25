#include "humidity.h"

/**
 * Humidity constructor makes a humidity object
 *
 * @param pin the pin that the humidity sensor is connected to
 */
Humidity::Humidity(std::string name_in, int pin)
{
  dht = dht(pin, DHTTYPE);
  dht.begin();
}

/**
 * The read method reads humidity sensor values
 */
void Humidity::read()
{
  humidity = dht.readHumidity();
  temperature = dht.readTemperature(true); /**< Fahrenheit (isFahrenheit = true, default Celcuis) */
};

/**
 * The send method sends data from the humidity over the serial connection
 */
void Humidity::send()
{
  read();
  if (isnan(humidity) || isnan(temperature))
  {
    Serial.println(F("Failed to read from DHT sensor!"));
  }
  else
  {
    Serial.print(F("Humidity: "));
    Serial.print(humidity);
    Serial.print(F("%  Temperature: "));
    Serial.print(temperature);
  }
};