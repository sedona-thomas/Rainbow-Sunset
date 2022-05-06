#include "runner.h"

/**
 * The runAll method runs all classes
 */
void Runner::runAll()
{
    runNeopixel();
    runLight();
}

/**
 * The runNeopixel method runs the Neopixel class
 */
void Runner::runNeopixel()
{
    DhtSensor dht = DhtSensor(12);
    delay(SECOND);
    dht.read();
    Serial.print("Humidity: ");
    Serial.print(dht.getHumidity());
    Serial.println("%");
    Serial.print("Temperature: ");
    Serial.println(dht.getTemperature());
    delay(SECOND);

    Neopixel circle = Neopixel(); /**< GPIO pin 13 */
    delay(SECOND);
    circle.setup();
    delay(SECOND);
    circle.runLoopSpeed(dht.getHumidity(), dht.getTemperature());
    delay(SECOND);
}

/**
 * The runLight method runs the Light class
 */
void Runner::runLight()
{
    Photoresistor photoresistor = Photoresistor(15);
    delay(SECOND);
    photoresistor.read();
    Serial.print("Photoresistor: ");
    Serial.print(photoresistor.getValue());
    Serial.print(" ");
    Serial.println(photoresistor.brightness().c_str());

    int max = 0 < photoresistor.getValue() && photoresistor.getValue() < 255 ? 255 - photoresistor.getValue() : 1;
    Serial.print("Max: ");
    Serial.println(max);

    Light red = Light(21);
    delay(SECOND);
    red.setup();
    delay(SECOND);
    red.runLoopMax(max);
    delay(SECOND);

    Light orange = Light(22);
    delay(SECOND);
    orange.setup();
    delay(SECOND);
    orange.runLoopMax(max);
    delay(SECOND);

    Light yellow = Light(32);
    delay(SECOND);
    yellow.setup();
    delay(SECOND);
    yellow.runLoopMax(max);
    delay(SECOND);

    Light green = Light(33);
    delay(SECOND);
    green.setup();
    delay(SECOND);
    green.runLoopMax(max);
    delay(SECOND);

    Light blue = Light(25);
    delay(SECOND);
    blue.setup();
    delay(SECOND);
    blue.runLoopMax(max);
    delay(SECOND);

    Light purple = Light(26);
    delay(SECOND);
    purple.setup();
    delay(SECOND);
    purple.runLoopMax(max);
    delay(SECOND);

    Light ocean = Light(27);
    delay(SECOND);
    ocean.setup();
    delay(SECOND);
    ocean.runLoopMax(max);
    delay(SECOND);
}