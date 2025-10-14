#define BOOTSCREEN_TEXT "[] Hello, Jon! []" // your name

#define BOOTSCREEN_NUM_SYMBOLS 8
#define BOOTSCREEN_NUM_STEPS 7

#define BOOTSCREEN_NUM_LINES 1

#define BOOTSCREEN_REPEAT 15

#define BOOTSCREEN_DIV 10

#define BOOTSCREEN_OFFSETS {\
    {-4,-2},\
    {-3,-1},\
    {-1,-1},\
    {0,-1},\
    {0,3},\
    {1,3},\
    {5,3},\
    {-5,-2},\
}

#define BOOTSCREEN_ASYMM (gpu_point){0,0}
#define BOOTSCREEN_PADDING 0

#define BOOTSCREEN_INNER_X_CONST 30
#define BOOTSCREEN_OUTER_X_DIV 3
#define BOOTSCREEN_UPPER_Y_DIV 3
#define BOOTSCREEN_LOWER_Y_CONST 30

#define PANIC_TEXT "FATAL ERROR"
#define default_pwd "hi"

/*-----------------------*
 *     NORD - THEME      *
 *-----------------------*
/+                      */


//#define BG_COLOR 0xFF222233 // original [REDACED] OS
//#define BG_COLOR 0xFF000000 // black
//#define BG_COLOR 0xFF808080 // grey 50%
//#define BG_COLOR 0xFF3B4252 // dark blue
//#define BG_COLOR 0xFF81A1C1 // blue
//#define BG_COLOR 0xFF88C0D0 // cyan
#define BG_COLOR 0xFFA3BE8C // green (standard)
//#define BG_COLOR 0xFFB48EAD // purple
//#define BG_COLOR 0xFFBF616A // red
//#define BG_COLOR 0xFFEBCA8B // yellow

#define CURSOR_COLOR_DESELECTED 0xFFFFFFFF // original [REDACED] OS
//#define CURSOR_COLOR_DESELECTED 0xFF808080 // grey 50%
//#define CURSOR_COLOR_DESELECTED 0xFF3B4252 // dark blue
//#define CURSOR_COLOR_DESELECTED 0xFF81A1C1 // blue
//#define CURSOR_COLOR_DESELECTED 0xFF88C0D0 // cyan
//#define CURSOR_COLOR_DESELECTED 0xFFA3BE8C // green
//#define CURSOR_COLOR_DESELECTED 0xFFB48EAD // purple
//#define CURSOR_COLOR_DESELECTED 0xFFBF616A // red
//#define CURSOR_COLOR_DESELECTED 0xFFEBCA8B // yellow


//#define CURSOR_COLOR_SELECTED 0xFF9714DE // original [REDACED] OS
#define CURSOR_COLOR_SELECTED 0xFFFFFFFF // white (standard)
//#define CURSOR_COLOR_SELECTED 0xFF808080 // grey 50%
//#define CURSOR_COLOR_SELECTED 0xFF3B4252 // dark blue
//#define CURSOR_COLOR_SELECTED 0xFF81A1C1 // blue
//#define CURSOR_COLOR_SELECTED 0xFF88C0D0 // cyan
//#define CURSOR_COLOR_SELECTED 0xFFA3BE8C // green
//#define CURSOR_COLOR_SELECTED 0xFFB48EAD // purple
//#define CURSOR_COLOR_SELECTED 0xFFBF616A // red
//#define CURSOR_COLOR_SELECTED 0xFFEBCA8B // yellow

#define COLOR_WHITE 0xFFFFFFFF
#define COLOR_BLACK 0

#define COLOR_GREY 0xFF808080
#define COLOR_DARK_BLUE 0xFF3B4252 // dark blue
#define COLOR_BLUE   0xFF81A1C1 // blue
#define COLOR_CYAN   0xFF88C0D0 // cyan
#define COLOR_GREEN  0xFFA3BE8C // green
#define COLOR_PURPLE 0xFFB48EAD // purple
#define COLOR_RED    0xFFBF616A // red
#define COLOR_YELLOW 0xFFEBCA8B // yellow
