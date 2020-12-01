MCU=atmega328p
F_CPU=1200000
CC=avr-gcc
OBJCOPY=avr-objcopy
CFLAGS=-std=c99 -Wall -g -Os -mmcu=${MCU} -I.
TARGET=main
SRCS=main.c arduinoUno.c 

all:
	${CC} ${CFLAGS} -o build/${TARGET}.bin ${SRCS}
	${OBJCOPY} -j .text -j .data -O ihex build/${TARGET}.bin build/${TARGET}.hex

flash:
	avrdude -p ${MCU} -c arduino -U flash:w:build/${TARGET}.hex:i -F -P /dev/ttyACM0