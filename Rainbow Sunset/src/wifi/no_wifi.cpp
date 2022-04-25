#include "no_wifi.h"

Glass artwork = Glass(); /**< stained glass artwork */

/**
 * The wifiSetup method sets up the ESP32 with a wifi serial connection
 */
void noWifiSetup()
{
    setupScreen();
    resetScreen();
    artwork.setup();
    delay(SECOND * 5);
}

/**
 * The wifiLoop method processes the necessary actions based on the current state of the given website
 */
void noWifiLoop()
{
    rainbowBackground();
    artwork.run();
    delay(SECOND * 5);
}