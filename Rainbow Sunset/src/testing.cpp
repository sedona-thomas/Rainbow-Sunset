#include "testing.h"

/**
 * The testAll method tests all classes
 */
void Testing::testAll()
{
    testDhtSensor();
    testPhotoresistor();
    testNeopixel();
    testLight();
}

/**
 * The testDhtSensor method tests the DhtSensor class
 */
void Testing::testDhtSensor()
{
    DhtSensor dht = DhtSensor(12);

    delay(SECOND);

    dht.read();

    Serial.print("Humidity: ");
    Serial.print(dht.getHumidity());
    Serial.println("%");

    Serial.print("Temperature: ");
    Serial.println(dht.getTemperature());

    Serial.println(dht.json().c_str());

    delay(SECOND);
}

/**
 * The testPhotoresistor method tests the Photoresistor class
 *
 * Not using: issue with photoresistor likely having the circuitry fried
 */
void Testing::testPhotoresistor()
{
    Photoresistor photoresistor = Photoresistor(13);

    delay(SECOND);

    photoresistor.read();

    Serial.print("Value: ");
    Serial.println(photoresistor.getValue());

    Serial.print("Brightness: ");
    Serial.println(photoresistor.brightness().c_str());

    Serial.println(photoresistor.json().c_str());

    delay(SECOND);
}

/**
 * The testNeopixel method tests the Neopixel class
 */
void Testing::testNeopixel()
{
    Neopixel circle = Neopixel();
    delay(SECOND);
    circle.setup();
    delay(SECOND);
    circle.runChain();
    delay(SECOND);
}

/**
 * The testLight method tests the Light class
 */
void Testing::testLight()
{
    Light light = Light(2);
    delay(SECOND);
    light.setup();
    delay(SECOND);
    light.runLoop();
    delay(SECOND);
}