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
    Light red = Light(21);
    delay(SECOND);
    red.setup();
    delay(SECOND);
    red.runLoop();
    delay(SECOND);

    Light orange = Light(22);
    delay(SECOND);
    orange.setup();
    delay(SECOND);
    orange.runLoop();
    delay(SECOND);

    Light yellow = Light(32);
    delay(SECOND);
    yellow.setup();
    delay(SECOND);
    yellow.runLoop();
    delay(SECOND);

    Light green = Light(33);
    delay(SECOND);
    green.setup();
    delay(SECOND);
    green.runLoop();
    delay(SECOND);

    Light blue = Light(25);
    delay(SECOND);
    blue.setup();
    delay(SECOND);
    blue.runLoop();
    delay(SECOND);

    Light purple = Light(26);
    delay(SECOND);
    purple.setup();
    delay(SECOND);
    purple.runLoop();
    delay(SECOND);

    Light ocean = Light(27);
    delay(SECOND);
    ocean.setup();
    delay(SECOND);
    ocean.runLoop();
    delay(SECOND);
}