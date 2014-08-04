#ifndef FONTS_H_
#define FONTS_H_

/* Partially based on original code for the KS0108 by Stephane Rey */
/* Current version by Kevin Townsend */
/* Last Updated: 12 May 2009 */

//#include "sysdefs.h"

typedef uint8_t st7565drawmode_t;

enum TPC_timingMode_t
{
    DM_NORMAL 	= 0,		// Print Black
    DM_REVERSE 	= 1,		// Print White
    DM_INVERT 	= 2			// Print Inverted Existing colour
};

typedef struct FONT_DEF FONT_DEF_STRUCT;
struct FONT_DEF 
{
    uint8_t 	Width;     			/* Character width for storage         */
    uint8_t 	Height;  				/* Character height for storage        */
    uint8_t 	FirstChar;     	/* The first character available       */
    uint8_t 	LastChar;      	/* The last character available        */
    uint8_t 	*FontTable;   	/* Font table start address in memory  */
};

extern FONT_DEF_STRUCT * Font12x16;
extern FONT_DEF_STRUCT * Font5x7;
extern FONT_DEF_STRUCT * Font12x24Numbers;




#endif
