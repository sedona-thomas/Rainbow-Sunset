# Rainbow-Sunset

![Rainbow Sunset Stained Glass](Images/IMG_0155.PNG?raw=true "Rainbow Sunset")

## Materials

 - ESP32 (CP 2104 Chip)
 - computer
 - USB-C cord
 - glass sheets (preferrably cathedral glass)
 - 60% tin/40% lead Stained glass solder
 - stained glass flux
 - copper foil

## Tools

- soldering iron
- breaker/grozer pliers
- running pliers
- glass cutter
- safety glasses
- flux brush
- copper foil burnisher (can use a block of scrap wood)
- glass grinder

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

#### Make Enclosure

##### Make Stained Glass Piece

- Draw the pattern on a piece of paper or cut out of vinyl stickers
- Put your glass pieces over the paper and trace the pattern onto each corresponding color of glass
  - Trace each outline so the least amount of glass is broken for each straight cut
- Use a glass cutter to score straight lines across the glass and break with running pliers
  - Try to cut as close to the glass as possible, using only straight breaks all the way across the glass
- Use the grozer pliers to carefully break off small pieces of glass to get as close to your outline as possible
  - Try to snap small pieces off in small lines along any concave curve
- Use the glass grinder to smooth any sharp edges and smooth curves along the drawn outline
- Apply copper foil to the edges of the glass
- Use the copper foil burnisher to smooth down the edges of the copper foil
- Apply flux to the copper foil and solder the pieces together

##### Solder the Lights

- Solder the ground (-) end of each light to the desired position on the back of the stained glass piece
- Solder the positive end of each light to a wire
- Solder together lights behind the same color of glass
- Hot glue each wire along the back side of the solder to hide the wires

##### Connect the Lights

- Connect the lights from the red panel to GPIO pin 21
- Connect the lights from the orange panel to GPIO pin 22
- Connect the lights from the yellow panel to GPIO pin 32
- Connect the lights from the green panel to GPIO pin 33
- Connect the lights from the blue panel to GPIO pin 25
- Connect the lights from the purple panel to GPIO pin 26
- Connect the lights from the ocean panel to GPIO pin 27

#### Connect Neopixel Ring

- Attach the D1 pin of the neopoxel light ring to pin 13 of the ESP32
- Connect the 5V pin to an external battery positive terminal
- Connect the ground pin to an external battery ground (-) terminal

#### Connect Sensors

##### Connect the DHT22 Sensor

- Connect the first pin to the 5V pin of the ESP32
- Connect the third pin to GPIO pin 12
- Connect the fourth pin to a ground pin of the ESP32

##### Connect the 4 Prong Photoresistor

- Connect the Vcc prong to the 5V pin of the ESP32
- Connect tge GND pin to a ground pin of the ESP32
- Connect the A0 (analog) pin to GPIO pin 15

### Run Device

- Either plug in the ESP32 or plug an external battery to the ESP32
- The program will automatically run

## More Information

Medium Blog Post: [https://sedonathomas.medium.com/rainbow-sunset-edff6b4f1702](https://sedonathomas.medium.com/rainbow-sunset-edff6b4f1702)

Youtube Demo: [https://youtu.be/Bv8L7zAvgYc](https://youtu.be/Bv8L7zAvgYc)

##
## Special Thanks to Professor Mark Santolucito, the staff at the Barnard Design Center, and the staff at the Columbia Makerspace for all of their help and supplies!!!
