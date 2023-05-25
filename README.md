# Atmega328p Xplained Mini test

Repo with test code for Atmel Atmega328p Xplained Mini development AVR.

Code blinks onboard LED0 (PB5) and PB4 at 2Hz. Test to check if board is working
and if flashing using CLI (avrdude) works properly.

## Build

A Debian based system was used to build this, but it should work for most other
distros, as long as you install the dependencies yourself. If you have a Debian
based system, you can install the dependencies using the makefile.

```
cd src && sudo make get-requirements
```

After this, you can compile:

```
make
```

And finally, flash the board

```
make flash
```

LED0 should be blinking now, and PB4 should toggle at the same
frequency (connect a LED to verify).
