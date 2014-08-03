

#include <avr/io.h>
#include <avr/pgmspace.h> 

#include "fonts.h"

/*
Char S

----------------+
      11  1111  |
     111 111111 |
     11  11  11 |
     11  11  11 |
     11  11  11 |
     11  11  11 |
     11  11  11 |
     11  11  11 |
     111111 111 |
      1111  11  |
                |
----------------+

*/
const uint8_t font12x16[] PROGMEM = {

	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	// char 0x20 SPACE
	0x00,0x00,0x00,0x00,0x00,0x00,0x06,0xFE,0x06,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	// char 0x21 !
	0x00,0x00,0x00,0x00,0x00,0x3C,0x00,0x3C,0x00,0x00,0x00,0x00,0x00,0x3C,0x00,0x3C,0x00,0x00,0x00,0x00,	// char 0x22 "
	0x01,0x98,0x01,0x98,0x07,0xFE,0x07,0xFE,0x01,0x98,0x01,0x98,0x07,0xFE,0x07,0xFE,0x01,0x98,0x01,0x98,	// char 0x23 #
	0x02,0x30,0x06,0x78,0x0C,0xCC,0x0C,0xCC,0x1F,0xFE,0x1F,0xFE,0x0C,0xCC,0x0C,0xCC,0x07,0x98,0x03,0x10,	// char 0x24 $
	0x0C,0x1C,0x0E,0x3E,0x07,0x22,0x03,0xBE,0x01,0xDC,0x0E,0xE0,0x1F,0x70,0x11,0x38,0x1F,0x1C,0x0E,0x0C,	// char 0x25 %
	0x03,0x80,0x07,0xDC,0x06,0x7E,0x06,0x66,0x06,0xE6,0x03,0xFE,0x01,0x9C,0x03,0x80,0x06,0xC0,0x04,0x40,	// char 0x26 &
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3C,0x00,0x3C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	// char 0x27 '
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xF8,0x7F,0xFC,0x80,0x02,0x80,0x02,0x00,0x00,0x00,0x00,	// char 0x28 (
	0x00,0x00,0x00,0x00,0x80,0x02,0x80,0x02,0x7F,0xFC,0x3F,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	// char 0x29 )
	0x00,0x00,0x03,0x0C,0x01,0x98,0x00,0xF0,0x07,0xFE,0x07,0xFE,0x00,0xF0,0x01,0x98,0x03,0x0C,0x00,0x00,	// char 0x2a
	0x00,0x00,0x00,0x60,0x00,0x60,0x00,0x60,0x03,0xFC,0x03,0xFC,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x00,	// char 0x2b +
	0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x00,0x17,0x00,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	// char 0x2c ,
	0x00,0x00,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x00,	// char 0x2d -
	0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	// char 0x2e .
	0x06,0x00,0x07,0x00,0x03,0x80,0x01,0xC0,0x00,0xE0,0x00,0x70,0x00,0x38,0x00,0x1C,0x00,0x0E,0x00,0x06,	// char 0x2f /

	0x00,0x00,0x01,0xF8,0x03,0xFC,0x06,0xC6,0x06,0x66,0x06,0x36,0x06,0x1E,0x03,0xFC,0x01,0xF8,0x00,0x00,	// char 0x30 0
	0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x06,0x07,0xFE,0x07,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	// char 0x31 1
	0x07,0x8C,0x07,0xCE,0x06,0x66,0x06,0x66,0x06,0x66,0x06,0x66,0x06,0x66,0x06,0x66,0x06,0x7E,0x06,0x3C,	// char 0x32 2
	0x03,0x0C,0x07,0x0E,0x06,0x06,0x06,0x66,0x06,0x66,0x06,0x66,0x06,0x66,0x06,0x66,0x07,0xFE,0x03,0x9C,	// char 0x33 3
	0x01,0x80,0x01,0xE0,0x01,0xF8,0x01,0x9E,0x01,0x86,0x01,0x80,0x07,0xFE,0x07,0xFE,0x01,0x80,0x01,0x80,	// char 0x34 4
	0x03,0x7E,0x07,0x7E,0x06,0x66,0x06,0x66,0x06,0x66,0x06,0x66,0x06,0x66,0x06,0x66,0x07,0xE6,0x03,0xC6,	// char 0x35 5
	0x01,0xF8,0x03,0xFC,0x06,0x66,0x06,0x66,0x06,0x66,0x06,0x66,0x06,0x66,0x06,0x66,0x03,0xEC,0x01,0xC8,	// char 0x36 6
	0x00,0x00,0x00,0x06,0x00,0x06,0x07,0x06,0x07,0x86,0x00,0xC6,0x00,0x66,0x00,0x36,0x00,0x1E,0x00,0x0E,	// char 0x37 7
	0x03,0x9C,0x07,0xFE,0x06,0x66,0x06,0x66,0x06,0x66,0x06,0x66,0x06,0x66,0x06,0x66,0x03,0xFE,0x03,0x9C,	// char 0x38 8
	0x03,0x38,0x07,0x7C,0x06,0x66,0x06,0x66,0x06,0x66,0x06,0x66,0x066,0x6,0x06,0x26,0x03,0xFC,0x01,0xF8,	// char 0x39 9
	0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x38,0x07,0x38,0x07,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	// char 0x3a :
	0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x00,0x17,0x00,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	// char 0x3b ;
	0x00,0x00,0x00,0x00,0x00,0x40,0x00,0xE0,0x01,0xF0,0x03,0xB8,0x07,0x1C,0x06,0x0C,0x04,0x04,0x00,0x00,	// char 0x3c <
	0x00,0x00,0x01,0x98,0x01,0x98,0x01,0x98,0x01,0x98,0x01,0x98,0x01,0x98,0x01,0x98,0x01,0x98,0x00,0x00,	// char 0x3d =
	0x00,0x00,0x04,0x04,0x06,0x0C,0x07,0x1C,0x03,0xB8,0x01,0xF0,0x00,0xE0,0x00,0x40,0x00,0x00,0x00,0x00,	// char 0x3e >
	0x00,0x00,0x00,0x0C,0x00,0x0E,0x00,0x06,0x06,0xC6,0x06,0xE6,0x00,0x66,0x00,0x7E,0x00,0x3C,0x00,0x00,	// char 0x3f ?

	0x00,0x00,0x01,0xF8,0x02,0x04,0x04,0xF2,0x05,0x0A,0x05,0x0A,0x04,0xF2,0x01,0x04,0x00,0xF8,0x00,0x00,	// char 0x40 @
	0x07,0xE0,0x07,0xF0,0x01,0xB8,0x01,0x9C,0x01,0x8E,0x01,0x8E,0x01,0x9C,0x01,0xB8,0x07,0xF0,0x07,0xE0,	// char 0x41 A
	0x07,0xFE,0x07,0xFE,0x06,0x66,0x06,0x66,0x06,0x66,0x06,0x66,0x06,0x66,0x06,0x66,0x03,0xFC,0x01,0x98,	// char 0x42 B
	0x01,0xF8,0x03,0xFC,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x03,0x9C,0x01,0x98,	// char 0x43 C
	0x07,0xFE,0x07,0xFE,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x03,0xFC,0x01,0xF8,	// char 0x44 D
	0x07,0xFE,0x07,0xFE,0x06,0x66,0x06,0x66,0x06,0x66,0x06,0x66,0x06,0x66,0x06,0x66,0x06,0x06,0x06,0x06,	// char 0x45 E
	0x07,0xFE,0x07,0xFE,0x00,0x66,0x00,0x66,0x00,0x66,0x00,0x66,0x00,0x66,0x00,0x66,0x00,0x06,0x00,0x06,	// char 0x46 F
	0x01,0xF8,0x03,0xFC,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x66,0x06,0x66,0x02,0x66,0x07,0xEC,0x07,0xE8,	// char 0x47 G
	0x07,0xFE,0x07,0xFE,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x07,0xFE,0x07,0xFE,	// char 0x48 H
	0x00,0x00,0x00,0x00,0x06,0x06,0x06,0x06,0x07,0xFE,0x07,0xFE,0x06,0x06,0x06,0x06,0x00,0x00,0x00,0x00,	// char 0x49 
	0x00,0x00,0x03,0x00,0x07,0x00,0x06,0x06,0x06,0x06,0x06,0x06,0x07,0xFE,0x03,0xFE,0x00,0x00,0x00,0x00,	// char 0x4a 
	0x07,0xFE,0x07,0xFE,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0xF0,0x01,0xF8,0x03,0x9C,0x07,0x0E,0x06,0x06,	// char 0x4b 
	0x07,0xFE,0x07,0xFE,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,	// char 0x4c 
	0x07,0xFE,0x07,0xFE,0x00,0x1C,0x00,0x38,0x00,0x70,0x00,0x70,0x00,0x38,0x00,0x1C,0x07,0xFE,0x07,0xFE,	// char 0x4d 
	0x03,0xFE,0x03,0xFE,0x00,0x0E,0x00,0x1C,0x00,0x38,0x00,0x70,0x00,0xE0,0x01,0xC0,0x03,0xFE,0x03,0xFE,	// char 0x4e 
	0x01,0xF8,0x03,0xFC,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x03,0xFC,0x01,0xF8,	// char 0x4f O

	0x07,0xFE,0x07,0xFE,0x00,0xC6,0x00,0xC6,0x00,0xC6,0x00,0xC6,0x00,0xC6,0x00,0xC6,0x00,0xFE,0x00,0x7C,	// char 0x50 P
	0x01,0xF8,0x03,0xFC,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x1E,0x06,0x1E,0x06,0x13,0xFC,0x01,0xF8,	// char 0x51 
	0x07,0xFE,0x07,0xFE,0x00,0xC6,0x00,0xC6,0x00,0xC6,0x00,0xC6,0x01,0xC6,0x03,0xC6,0x06,0xFE,0x04,0x7C,	// char 0x52 
	0x03,0x3C,0x07,0x7E,0x06,0x66,0x06,0x66,0x06,0x66,0x06,0x66,0x06,0x66,0x06,0x66,0x07,0xEE,0x03,0xCC,	// char 0x53 
	0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x07,0xFE,0x07,0xFE,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,	// char 0x54 
	0x01,0xFE,0x03,0xFE,0x07,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x07,0x00,0x03,0xFE,0x01,0xFE,	// char 0x55 
	0x00,0x7E,0x00,0xFE,0x01,0xC0,0x03,0x80,0x07,0x00,0x07,0x00,0x03,0x80,0x01,0xC0,0x00,0xFE,0x00,0x7E,	// char 0x56 
	0x01,0xFE,0x03,0xFE,0x07,0x00,0x07,0x00,0x03,0xFE,0x03,0xFE,0x07,0x00,0x07,0x00,0x03,0xFE,0x01,0xFE,	// char 0x57 
	0x06,0x06,0x07,0x0E,0x03,0x9C,0x01,0xF8,0x00,0xF0,0x00,0xF0,0x01,0xF8,0x07,0x9C,0x07,0x0E,0x06,0x06,	// char 0x58 
	0x00,0x0E,0x00,0x1E,0x00,0x38,0x00,0x70,0x07,0xE0,0x07,0xE0,0x00,0x70,0x00,0x38,0x00,0x1E,0x00,0x0E,	// char 0x59 
	0x06,0x06,0x07,0x06,0x07,0x86,0x07,0xC6,0x06,0xE6,0x06,0x76,0x06,0x3E,0x06,0x1E,0x06,0x0E,0x06,0x06,	// char 0x5a Z
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xFE,0x7F,0xFE,0x40,0x02,0x40,0x02,0x00,0x00,0x00,0x00,	// char 0x5b [
	0x00,0x06,0x00,0x0E,0x00,0x1C,0x00,0x38,0x00,0x70,0x00,0xE0,0x01,0xC0,0x03,0x80,0x07,0x00,0x06,0x00,	// char 0x5c backslash
	0x00,0x00,0x00,0x00,0x40,0x02,0x40,0x02,0x7F,0xFE,0x7F,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	// char 0x5d ]
	0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x0C,0x00,0x06,0x00,0x06,0x00,0x0C,0x00,0x08,0x00,0x00,0x00,0x00,	// char 0x5e ^
	0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,	// char 0x5f _

	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x06,0x00,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	// char 0x60 `
	0x03,0xF0,0x07,0xF8,0x06,0x18,0x06,0x18,0x06,0x18,0x06,0x18,0x06,0x18,0x02,0x10,0x07,0xF8,0x07,0xF8,	// char 0x61 a
	0x07,0xFE,0x07,0xFE,0x02,0x10,0x06,0x18,0x06,0x18,0x06,0x18,0x06,0x18,0x06,0x18,0x07,0xF8,0x03,0xF0,	// char 0x62 b
	0x03,0xF0,0x07,0xF8,0x06,0x18,0x06,0x18,0x06,0x18,0x06,0x18,0x06,0x18,0x06,0x18,0x07,0x38,0x03,0x30,	// char 0x63 c
	0x03,0xF0,0x07,0xF8,0x06,0x18,0x06,0x18,0x06,0x18,0x06,0x18,0x06,0x18,0x02,0x10,0x07,0xFE,0x07,0xFE,	// char 0x64 d
	0x03,0xF0,0x07,0xF8,0x06,0xD8,0x06,0xD8,0x06,0xD8,0x06,0xD8,0x06,0xD8,0x06,0xD8,0x06,0xF8,0x02,0xF0,	// char 0x65 e
	0x00,0x00,0x00,0x60,0x00,0x60,0x07,0xFC,0x07,0xFE,0x00,0x66,0x00,0x66,0x00,0x66,0x00,0x00,0x00,0x00,	// char 0x66 f
	0x13,0xF0,0x37,0xF8,0x36,0x18,0x36,0x18,0x36,0x18,0x36,0x18,0x36,0x18,0x32,0x10,0x3F,0xF8,0x1F,0xF8,	// char 0x67 g
	0x07,0xFE,0x07,0xFE,0x00,0x10,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x07,0xF8,0x07,0xF0,	// char 0x68 h
	//0x00,0x00,0x00,0x00,0x0C,0x30,0x0C,0x30,0x0F,0xF6,0x0F,0xF6,0x0C,0x00,0x0C,0x00,0x00,0x00,0x00,0x00,	// char 0x69 i
	0x00,0x00,0x00,0x00,0x06,0x30,0x06,0x30,0x07,0xF6,0x07,0xF6,0x06,0x00,0x06,0x00,0x00,0x00,0x00,0x00,	// char 0x69 i
	0x00,0x00,0x00,0x00,0x20,0x00,0x60,0x00,0x60,0x30,0x7F,0xF6,0x3F,0xF6,0x00,0x00,0x00,0x00,0x00,0x00,	// char 0x6a j
	0x07,0xFE,0x07,0xFE,0x00,0xC0,0x00,0xC0,0x00,0xE0,0x01,0xE0,0x03,0x30,0x02,0x30,0x06,0x18,0x04,0x18,	// char 0x6b k
	0x00,0x00,0x00,0x00,0x06,0x06,0x06,0x06,0x07,0xFE,0x07,0xFE,0x06,0x00,0x06,0x00,0x00,0x00,0x00,0x00,	// char 0x6c l
	0x07,0xF8,0x07,0xF8,0x00,0x10,0x00,0x18,0x07,0xF8,0x07,0xF0,0x00,0x10,0x00,0x18,0x07,0xF8,0x07,0xF0,	// char 0x6d m
	0x07,0xF8,0x07,0xF8,0x00,0x10,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x07,0xF8,0x07,0xF0,	// char 0x6e n
	0x03,0xF0,0x07,0xF8,0x06,0x18,0x06,0x18,0x06,0x18,0x06,0x18,0x06,0x18,0x06,0x18,0x07,0xF8,0x03,0xF0,	// char 0x6f o

	0x3F,0xF8,0x3F,0xF8,0x02,0x10,0x06,0x18,0x06,0x18,0x06,0x18,0x06,0x18,0x06,0x18,0x07,0xF8,0x03,0xF0,	// char 0x70 p
	0x03,0xF0,0x07,0xF8,0x06,0x18,0x06,0x18,0x06,0x18,0x06,0x18,0x06,0x18,0x02,0x10,0x3F,0xF8,0x3F,0xF8,	// char 0x71 
	0x07,0xF8,0x07,0xF8,0x00,0x10,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x38,0x00,0x30,	// char 0x72 
	0x02,0x70,0x06,0xF8,0x06,0xD8,0x06,0xD8,0x06,0xD8,0x06,0xD8,0x06,0xD8,0x06,0xD8,0x07,0xD8,0x03,0x90,	// char 0x73 
	0x00,0x00,0x00,0x18,0x00,0x18,0x03,0xFE,0x07,0xFE,0x06,0x18,0x06,0x18,0x06,0x18,0x00,0x00,0x00,0x00,	// char 0x74 
	0x03,0xF8,0x07,0xF8,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x02,0x00,0x07,0xF8,0x07,0xF8,	// char 0x75 
	0x00,0x78,0x00,0xF8,0x01,0xC0,0x03,0x80,0x07,0x00,0x07,0x00,0x03,0x80,0x01,0xC0,0x00,0xF8,0x00,0x78,	// char 0x76 
	0x01,0xF8,0x03,0xF8,0x07,0x00,0x07,0x00,0x03,0xF8,0x03,0xF8,0x07,0x00,0x07,0x00,0x03,0xF8,0x01,0xF8,	// char 0x77 
	0x06,0x18,0x07,0x38,0x03,0x30,0x01,0xE0,0x01,0xE0,0x01,0xE0,0x01,0xE0,0x03,0x30,0x07,0x38,0x06,0x18,	// char 0x78 x
	0x13,0xF8,0x37,0xF8,0x36,0x00,0x36,0x00,0x36,0x00,0x36,0x00,0x36,0x00,0x32,0x00,0x3F,0xF8,0x1F,0xF8,	// char 0x79 y
	0x06,0x00,0x06,0x18,0x07,0x18,0x07,0x98,0x07,0xD8,0x06,0xF8,0x06,0x78,0x06,0x38,0x06,0x18,0x06,0x18,	// char 0x7a z
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x3F,0xFC,0x7F,0x7E,0x40,0x02,0x40,0x02,0x00,0x00,0x00,0x00,	// char 0x7b {
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xFE,0x0F,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	// char 0x7c |
	0x00,0x00,0x00,0x00,0x40,0x02,0x40,0x02,0x7F,0x7E,0x3F,0xFC,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,	// char 0x7d }
	0x00,0x00,0x00,0x30,0x00,0x18,0x00,0x18,0x00,0x18,0x00,0x38,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x18,	// char 0x7e 
	0x00,0x00,0x00,0x00,0x00,0x3C,0x00,0x7E,0x00,0x66,0x00,0x66,0x00,0x7E,0x00,0x3C,0x00,0x00,0x00,0x00		// char 0x7f degree

//	0x0554,0x02AA,0x0554,0x02AA,0x0554,0x02AA,0x0554,0x02AA,0x0554,0x02AA,	// char 0x7f 

};

const FONT_DEF_STRUCT Font12x16_Struct =
{
	10,												// Width	
	16,												// Height
	0x20,											// Start Char
	0x7f,											// End Char
	(uint8_t*) &font12x16			// Font Data
};

FONT_DEF_STRUCT * Font12x16 = (FONT_DEF_STRUCT *) &Font12x16_Struct;
