import * as gpio from "gpio"

// set 12, 13, 14, 15 as output mode
gpio.setMode(12, "output")
gpio.setMode(13, "output")
gpio.setMode(14, "output")
gpio.setMode(15, "output")

// blink the LEDs every second
setInterval(() => {
    gpio.write(12, gpio.read(12)? 0 : 1)
    gpio.write(13, gpio.read(13)? 0 : 1)
    gpio.write(14, gpio.read(14)? 0 : 1)
    gpio.write(15, gpio.read(15)? 0 : 1)
},1000)