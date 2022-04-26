#include "wifi_handler.h"

const char *ssid_Router = "Columbia University";          /**< router name */
const char *password_Router = "";                         /**< router password */
String address = "http://134.122.113.13/snt2127/running"; /**< website to check */
Glass artwork = Glass();                                  /**< stained glass artwork */

/**
 * The wifiSetup method sets up the ESP32 with a wifi serial connection
 */
void wifiSetup()
{
    setupSerial();
    setupScreen();
    resetScreen();
    artwork.setup();
    delay(SECOND * 5);
}

/**
 * The wifiLoop method processes the necessary actions based on the current state of the given website
 */
void wifiLoop()
{
    if ((WiFi.status() == WL_CONNECTED))
    {
        processHttpRequest();
        delay(SECOND / 2);
    }
}

/**
 * The processHttpRequest method processes the current http request and returns whether it was successfull
 *
 * @return Whether the HTTP code was OK
 */
void processHttpRequest()
{
    HTTPClient http;
    http.begin(address);
    int httpCode = http.GET();
    if (httpCode == HTTP_CODE_OK)
    {
        String response = http.getString();
        if (response.equals("false"))
        {
            waiting();
        }
        else if (response.equals("true"))
        {
            running();
        }
        USE_SERIAL.println("Response was: " + response);
    }
    else
    {
        USE_SERIAL.printf("[HTTP] GET... failed, error: %s\n", http.errorToString(httpCode).c_str());
    }
    http.end();
}

/**
 * The setupSerial method sets up the serial connection over wifi
 */
void setupSerial()
{
    USE_SERIAL.begin(BAUD_RATE);
    WiFi.begin(ssid_Router, password_Router);
    USE_SERIAL.println(String("Connecting to ") + ssid_Router);
    while (WiFi.status() != WL_CONNECTED)
    {
        delay(500);
        USE_SERIAL.print(".");
        printToScreen(".");
    }
    USE_SERIAL.println("\nConnected, IP address: ");
    USE_SERIAL.println(WiFi.localIP());
    USE_SERIAL.println("Setup End");
}

/**
 * The waiting method defines what to do when the program is not running
 */
void waiting()
{
    randomBackground();
    printToScreen("false");
    delay(SECOND * 5);
}

/**
 * The running method defines what to do when the program is running
 */
void running()
{
    rainbowBackground();
    printToScreen("false");
    artwork.run();
    delay(SECOND * 5);
}