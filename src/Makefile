# variables related to board
MCU = atmega328p
F_CPU = 16000000UL
BAUD = 9600
PROGRAMMER = xplainedmini
FUSES = -U hfuse:w:0xd9:m -U lfuse:w:0xe0:m -U efuse:w:0xff:m
PORT = usb

# Variables for compilation
CC = avr-gcc
CFLAGS = -Wall -Wextra -Os
OBJ = main.o

all: main.elf

get-requirements:
	apt-get install gcc-avr binutils-avr gdb-avr avr-libc avrdude -y

main.elf: main.c
	$(CC) $(CFLAGS) -mmcu=$(MCU) $< -o $@

flash: main.elf
	avrdude -v -p $(MCU) -c $(PROGRAMMER) -b $(BAUD) -P $(PORT) $(FUSES) -U flash:w:$<:e

clean:
	rm -rf *.o *.hex *.elf
