#define BD_COUNT 6
#define CS 10
#define FONT_NORMAL 0
#define FONT_LARGE 1
#define BUTTON_UP 1
#define BUTTON_DOWN 0
#define S0_PIN 7
#define S1_PIN 8
#define S2_PIN 9
#define S3_PIN 10
// try different values here. good displays can go higher.
// 512 for
// example. worse need to go lower. 64 for example
#define IMG_CACHE_SIZE 128
#define DELAY 0
#define LONG_PRESS_DURATION 300
// increase to 1500-1800 or higher if some displays dont
// startup right
// away
#define BOOT_DELAY 0
#define CONFIG_NAME "config.bin"
#define MAX_CACHE 32

#define DIRECT_PORT
#define I2CPORT PORTD
// A bit set to 1 in the DDR is an output, 0 is an INPUT
#define I2CDDR DDRD

// Pin or port numbers for SDA and SCL
#define BB_SDA 2
#define BB_SCL 3

#if F_CPU > 8000000L
#define I2C_DELAY 2
#else
#define I2C_DELAY 0
#endif