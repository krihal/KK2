ifndef KKVER
	KKVER = 2
endif

ifeq ($(KKVER), 2)
	DEVICE = atmega324pa
	AVRDUDE_DEVICE = atmega324pa
	F_CPU = 16000000
	DEVICE_DEFINE = -DKKVER=2
else ifeq ($(KKVER), 2.1)
	DEVICE = atmega644pa
	AVRDUDE_DEVICE = m644p
	F_CPU = 20000000
	DEVICE_DEFINE = -DKKVER=21
else
        $(error Unknown KK version supplied to KKVER)
endif

PROGRAMMER = usbasp
AVRDUDE = avrdude -c $(PROGRAMMER) -p $(AVRDUDE_DEVICE)
CFLAGS  = -I. -Ilib/ -Iinclude/
OBJECTS = kk2.o lib/wiring/wiring.o lib/I2Cdev/I2Cdev.o lib/MPU6050/MPU6050.o lib/lcd/font12x16.o lib/lcd/font12x24Number.o lib/lcd/font5x7.o lib/lcd/st7565.o
ARGS = -Wall -Os $(DEVICE_DEFINE) -DF_CPU=$(F_CPU) $(CFLAGS) -mmcu=$(DEVICE)
COMPILE = avr-gcc $(ARGS)
COMPILE_CPP = avr-g++ $(ARGS)

hex: kk2.hex

flash: kk2.hex
	$(AVRDUDE) -U flash:w:kk2.hex:i

clean:
	rm -f kk2.hex kk2.lst kk2.obj kk2.cof kk2.list kk2.map kk2.eep.hex kk2.elf *.o kk2.s lib/wiring/*.o lib/MPU6050/*.o lib/I2Cdev/*.o lib/lcd/*.o

.c.o:
	$(COMPILE) -c $< -o $@
.cpp.o:
	$(COMPILE_CPP) -c $< -o $@

kk2.elf: $(OBJECTS)
	$(COMPILE) -o kk2.elf $(OBJECTS)

kk2.hex: kk2.elf
	rm -f kk2.hex kk2.eep.hex
	avr-objcopy -j .text -j .data -O ihex kk2.elf kk2.hex
	avr-size kk2.hex

disasm:	kk2.elf
	avr-objdump -d kk2.elf
