/**
 * The wifi handler controls an ESP32 wifi connection
 *
 * @author Sedona Thomas
 * @version 2.0.0
 */

#ifndef __NO_WIFI_H__
#define __NO_WIFI_H__

#include <Arduino.h>
#include "../stained_glass/glass.h"
#include "../screen/esp32_screen.h"

#define USE_SERIAL Serial /**< serial communication */
#define SECOND 1000       /**< miliseconds (1000 miliseconds == 1 second) */
#define TESTING false     /**< sets testing mode */
#define BAUD_RATE 115200  /**< baud rate of wifi communication */

void noWifiSetup();
void noWifiLoop();

#endif