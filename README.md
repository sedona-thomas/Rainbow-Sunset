# Rainbow-Sunset

## Materials

 - ESP32 (CP 2104 Chip)
 - computer
 - USB-C cord
 - glass sheets (a variety of colors)
 - 60% tin/40% lead Stained glass solder
 - Stained glass flux
 - Copper foil

## Tools

- Soldering iron
- Breaker/Grozer Pliers
- Running Pliers
- Glass Cutter (for scoring the glass)
- Safety Glasses
- Flux Brush
- Copper foil burnisher (can use a block of scrap wood)

## Make at Home

### Setup Arduino

- Download and open the Arduino IDE ([Download](https://www.arduino.cc/en/software))
- Open Preferences 
- Copy and paste the following link ([https://dl.espressif.com/dl/package_esp32_index.json](https://dl.espressif.com/dl/package_esp32_index.json)) into `Additonal Boards Manager URLs` to add the ESP package
- Select `Tools > Boards > Boards Manager`, then search for `esp32` and install the most recent version
- Select `Tools > Boards > ESP32 Arduino > TTGO T1`
- Select `Tools > Manage Libraries`, then search for `TFT_eSPI` and install the most recent version
- In your file storage system, find the Arduino folder
- Open `Arduino/libraries/TFT_eSPI/User_Setup_Select.h`
- Comment out the line that says `#include <User_Setup.h>`
- Uncomment the line that says `#include <User_Setups/Setup25_TTGO_T_Display.h>`

#### Setup Python Serial Ports

- Download Anaconda ([https://www.anaconda.com/products/individual](https://www.anaconda.com/products/individual))
- Open Terminal
- Download pyserial `conda install pyserial`

#### Upload Program to ESP32

- 

### Build Hardware

#### Solder 

-

### Make Enclosure

-

### Run Device

- Plug the device into your computer
- Open _____

## More Information

Medium Blog Post: []()

Youtube Demo: []()

##
## Special Thanks to Professor Mark Santolucito, the staff at the Barnard Design Center, and the staff at the Columbia Makerspace for all of their help and supplies!!!
