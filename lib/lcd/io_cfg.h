/*********************************************************************
 *
 *********************************************************************
 * FileName:        io_cfg.h
 ********************************************************************/

#ifndef IO_CFG_H
#define IO_CFG_H

/** I N C L U D E S *************************************************/
/*
#define RX_ROLL    				REGISTER_BIT(PIND,3)	// INT1
#define RX_PITCH    			REGISTER_BIT(PIND,2)	// INT0
#define RX_COLL    				REGISTER_BIT(PIND,0)	// PCINT24
#define RX_YAW    				REGISTER_BIT(PINB,2)	// INT2
#define RX_AUX    				REGISTER_BIT(PINB,0)	// PCINT8
#define RX_ROLL_DIR   		REGISTER_BIT(DDRD,3)
#define RX_PITCH_DIR   		REGISTER_BIT(DDRD,2)
#define RX_COLL_DIR   		REGISTER_BIT(DDRD,0)
#define RX_YAW_DIR   			REGISTER_BIT(DDRB,2)
#define RX_AUX_DIR   			REGISTER_BIT(DDRB,0)


#define	GYRO_ROLL 				REGISTER_BIT(PINA,4)	// ADC4
#define GYRO_PITCH 				REGISTER_BIT(PINA,1)	// ADC1
#define GYRO_YAW 					REGISTER_BIT(PINA,2)	// ADC2
#define	GYRO_ROLL_DIR 		REGISTER_BIT(DDRA,4)
#define GYRO_PITCH_DIR 		REGISTER_BIT(DDRA,1)
#define GYRO_YAW_DIR 			REGISTER_BIT(DDRA,2)	

#define	ACC_ROLL 					REGISTER_BIT(PINA,5)	// ADC5
#define ACC_PITCH 				REGISTER_BIT(PINC,6)	// ADC6
#define ACC_YAW 					REGISTER_BIT(PINC,7)	// ADC7
#define	ACC_ROLL_DIR 			REGISTER_BIT(DDRA,5)
#define ACC_PITCH_DIR 		REGISTER_BIT(DDRA,6)
#define ACC_YAW_DIR 			REGISTER_BIT(DDRA,7)

#define	VBATT 						REGISTER_BIT(PINA,3)	// ADC3
#define VBATT_DIR 				REGISTER_BIT(DDRA,3)

#define M1		  					REGISTER_BIT(PORTC,6)
#define M2		  					REGISTER_BIT(PORTC,4)
#define M3		  					REGISTER_BIT(PORTC,2)
#define M4		  					REGISTER_BIT(PORTC,3)
#define M5		  					REGISTER_BIT(PORTC,1)
#define M6		  					REGISTER_BIT(PORTC,0)
#define M7		  					REGISTER_BIT(PORTC,5)
#define M8		  					REGISTER_BIT(PORTC,7)
#define M1_DIR 						REGISTER_BIT(DDRC,6)
#define M2_DIR 						REGISTER_BIT(DDRC,4)
#define M3_DIR 						REGISTER_BIT(DDRC,2)
#define M4_DIR 						REGISTER_BIT(DDRC,3)
#define M5_DIR 						REGISTER_BIT(DDRC,1)
#define M6_DIR 						REGISTER_BIT(DDRC,0)
#define M7_DIR 						REGISTER_BIT(DDRD,5)
#define M8_DIR 						REGISTER_BIT(DDRC,7)

//#define BUTTON_ON					0

#define	B1 								REGISTER_BIT(PINB,7)	// PCINT15 
#define	B2 								REGISTER_BIT(PINB,6)	// PCINT14
#define	B3 								REGISTER_BIT(PINB,5)	// PCINT13
#define	B4 								REGISTER_BIT(PINB,4)	// PCINT12
#define	B1_PU							REGISTER_BIT(PORTB,7)	// PCINT15 
#define	B2_PU							REGISTER_BIT(PORTB,6)	// PCINT14
#define	B3_PU							REGISTER_BIT(PORTB,5)	// PCINT13
#define	B4_PU 						REGISTER_BIT(PORTB,4)	// PCINT12
#define B1_DIR 						REGISTER_BIT(DDRB,7)
#define B2_DIR 						REGISTER_BIT(DDRB,6)
#define B3_DIR 						REGISTER_BIT(DDRB,5)
#define B4_DIR 						REGISTER_BIT(DDRB,4)
*/
#define ST7565_CS		  		REGISTER_BIT(PORTD,5)
#define ST7565_RST		  	REGISTER_BIT(PORTD,6)
#define ST7565_A0		  		REGISTER_BIT(PORTD,7)
#define ST7565_SCL		  	REGISTER_BIT(PORTD,4)
#define ST7565_SDA		  	REGISTER_BIT(PORTD,1)
#define ST7565_CS_DIR 		REGISTER_BIT(DDRD,5)
#define ST7565_RST_DIR 		REGISTER_BIT(DDRD,6)
#define ST7565_A0_DIR 		REGISTER_BIT(DDRD,7)
#define ST7565_SCL_DIR 		REGISTER_BIT(DDRD,4)
#define ST7565_SDA_DIR 		REGISTER_BIT(DDRD,1)
/*
#define LED 						REGISTER_BIT(PORTB,3)	// info
#define LED_DIR 				REGISTER_BIT(DDRB,3)

#define BUZZER		  		REGISTER_BIT(PORTB,1)
#define BUZZER_DIR  		REGISTER_BIT(DDRB,1)
*/

#endif //IO_CFG_H
