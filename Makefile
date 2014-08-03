DEVICE  = atmega324pa
F_CPU   = 16000000
AVRDUDE = avrdude -c usbasp -p $(DEVICE)
CFLAGS  = -I.
OBJECTS = kk2.o
COMPILE = avr-gcc -Wall -Os -DF_CPU=$(F_CPU) $(CFLAGS) -mmcu=$(DEVICE)

hex: kk2.hex

flash: kk2.hex
	$(AVRDUDE) -U flash:w:kk2.hex:i

clean:
	rm -f kk2.hex kk2.lst kk2.obj kk2.cof kk2.list kk2.map kk2.eep.hex kk2.elf *.o kk2.s

.c.o:
	$(COMPILE) -c $< -o $@

kk2.elf: $(OBJECTS)
	$(COMPILE) -o kk2.elf $(OBJECTS)

kk2.hex: kk2.elf
	rm -f kk2.hex kk2.eep.hex
	avr-objcopy -j .text -j .data -O ihex kk2.elf kk2.hex
	avr-size kk2.hex

disasm:	kk2.elf
	avr-objdump -d kk2.elf
