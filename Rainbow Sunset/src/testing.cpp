#include "testing.h"

/**
 * The testAll method tests all classes
 */
void Testing::testAll()
{
    testDhtSensor();
    testNeopixel();

    // testPhotoresistor();
    // testLight();
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
 * The testPhotoresistor method tests the Photoresistor class
 *
 * Not using: issue with photoresistor likely having the circuitry fried
 */
void Testing::testPhotoresistor()
{
    Photoresistor photoresistor = Photoresistor(15);

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
 * The testLight method tests the Light class
 */
void Testing::testLight()
{
    Light light = Light(36);
    delay(SECOND);
    light.setup();
    delay(SECOND);
    light.runLoop();
    delay(SECOND);

    // Light light = Light(36);
    // delay(SECOND);
    // light.setup();
    // delay(SECOND);
    // light.runLoop();
    // delay(SECOND);
    // Light light2 = Light(37);
    // delay(SECOND);
    // light2.setup();
    // delay(SECOND);
    // light2.runLoop();
    // delay(SECOND);
    // Light light3 = Light(38);
    // delay(SECOND);
    // light3.setup();
    // delay(SECOND);
    // light3.runLoop();
    // delay(SECOND);
    // Light light4 = Light(39);
    // delay(SECOND);
    // light4.setup();
    // delay(SECOND);
    // light4.runLoop();
    // delay(SECOND);
    // Light light5 = Light(32);
    // delay(SECOND);
    // light5.setup();
    // delay(SECOND);
    // light5.runLoop();
    // delay(SECOND);
    // Light light6 = Light(33);
    // delay(SECOND);
    // light6.setup();
    // delay(SECOND);
    // light6.runLoop();
    // delay(SECOND);
}