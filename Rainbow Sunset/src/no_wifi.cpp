#include "no_wifi.h"

const char *ssid_Router = "Columbia University";          /**< router name */
const char *password_Router = "";                         /**< router password */
String address = "http://134.122.113.13/snt2127/running"; /**< website to check */
Glass artwork = Glass();                                  /**< stained glass artwork */

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
    printToScreen("false");
    artwork.run();
    delay(SECOND * 5);
}