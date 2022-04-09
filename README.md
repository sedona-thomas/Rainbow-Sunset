# Rainbow-Sunset

## Materials

 - ESP32 (CP 2104 Chip)
 - computer
 - USB-C cord
 - glass sheets (preferrably cathedral glass)
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

### Install PlatformIO

- Download VSCode to your device ([download](https://code.visualstudio.com/download))
- Install the PlatformIO Plugin to VSCode
  - Go to `Extensions` and search PlatformIO
  - Select `PlatformIO IDE` and click install

#### Setup Python Serial Ports

- Download Anaconda ([https://www.anaconda.com/products/individual](https://www.anaconda.com/products/individual))
- Open Terminal
- Download pyserial `conda install pyserial`

#### Upload Program to ESP32

- Plug the device into your computer
- Open the project folder in your computer's terminal
- Open `platformio.ini` and change `upload_port =` to the port of your ESP32
  - Find the port name by going to `PIO Home > Devices` and copy the port name of your ESP32
- Run `platformio run` in your terminal
- Run  `platformio run --target upload` in your terminal
- Unplug the ESP32 from your computer

### Build Hardware

#### Solder 

-

#### Make Enclosure

-

### Run Device

- 

## More Information

Medium Blog Post: []()

Youtube Demo: []()

##
## Special Thanks to Professor Mark Santolucito, the staff at the Barnard Design Center, and the staff at the Columbia Makerspace for all of their help and supplies!!!
