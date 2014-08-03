const unsigned char IN1 = 0;  //PD3 (PCINT27/TXD1/INT1)  not tested, but use Serial1 
const unsigned char IN2 = 1;  //PD2 (PCINT26/RXD1/INT0)  interrupts good for CCPM decoding.
const unsigned char IN3 = 2;  //PD0 (PCINT24/RXD0/T3)  tx0 is on the lcd not sure if using this would conflict with the lcd  
const unsigned char IN4 = 3;  //PB2 (PCINT10/INT2/AIN0)
const unsigned char IN5 = 4;  //PB0 (PCINT8/XCK0/T0)  //timer/counter0 source

const unsigned char OUT1 = 5;  //PC6 (TOSC1/PCINT22)   //32.768kHz crystal or custom clock source for counter (rpm sensor)
const unsigned char OUT2 = 6;  //PC4 (TDO/PCINT20)   //JTAG 
const unsigned char OUT3 = 7;  //PC2 (TCK/PCINT18)   //JTAG
const unsigned char OUT4 = 8;  //PC3 (TMS/PCINT19)  //JTAG
const unsigned char OUT5 = 9;  //PC1 (SDA/PCINT17)  //I2C      i2c not tested
const unsigned char OUT6 = 10; //PC0 (SCL/PCINT16)  //I2C
const unsigned char OUT7 = 11; //PC5 (TDI/PCINT21)   //JTAG
const unsigned char OUT8 = 12; //PC7 (TOSC2/PCINT23)   //32.768kHz crystal

const unsigned char RED_LED = 13;  //PB3 (PCINT11/OC0A/AIN1)  //same as arduino!

const unsigned char BUT1 = 14;  //PB7 (PCINT15/OC3B/SCK)    PWM     pwm not tested
const unsigned char BUT2 = 15;  //PB6 (PCINT14/OC3A/MISO)   PWM
const unsigned char BUT3 = 16;  //PB5 (PCINT13/ICP3/MOSI)
const unsigned char BUT4 = 17;  //PB4 (PCINT12/OC0B/SS)

const unsigned char _BUZZER = 18;  //PB1 (PCINT9/CLKO/T1)   CLOCK output can adjust with system prescaler. (make tones) not tested

const unsigned char BATT = 3;

const unsigned char GYR_R = 1;
const unsigned char GYR_Y = 2;
const unsigned char GYR_P = 4;

const unsigned char ACC_X = 5;
const unsigned char ACC_Y = 6;
const unsigned char ACC_Z = 7;

const int switch_release_debounce_us = 100; //milliseconds
const int switch_press_debounce_uS = 500; //microseconds

