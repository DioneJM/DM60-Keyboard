# DM60-Keyboard

The DM60 is powered by the Teensy 2.0 with the ATMEGA32U4 chip.

This is the modified code based off the tmk_keyboard library that was used to develop the software used for it.

Full build log can be found here: http://imgur.com/a/LTWew

![ScreenShot](http://i.imgur.com/8VzgFym.jpg)

![ScreenShot](http://i.imgur.com/IaqBLyy.jpg) ![ScreenShot](http://i.imgur.com/c8lZeNj.jpg)

# How to make the hex file and install it onto the teensy.
1) Get the tmk_keyboard software from here: https://github.com/tmk/tmk_keyboard

2) Go to keyboard -> gh60 and delete keymap_poker.c file

3) Insert the provided files from this repo into the GH60 directory.

3.1) If your keyboard uses a different pin configuration than what I have used (as specified in the matrix.c file) ensure that it is changed to the specific config that you have used.

4) Make the hex file with "make -f Makefile" command whilst within the GH60 directory (requires avr-gcc compiler)

5) Install the hex file using teensy bootloader, which can be found here: https://www.pjrc.com/teensy/loader.html

6) Enjoy!
