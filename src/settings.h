/*
    The Settings File. If you don;t know programming, you should only change this file.

    In the file you can fine what all the different settings do

*/

// The amount of display you have on the Freedeck
#define BD_COUNT 6

/*
 The pins. Do not change unless you have a custom freedeck
*/
#define CS 10           // Chip Select for the SD Card
#define S0_PIN 7        // Select pin 0 for the multiplexer
#define S1_PIN 8        // Select pin 1 for the multiplexer
#define S2_PIN 9        // Select pin 2 for the multiplexer
#define S3_PIN 10       // Select pin 3 for the multiplexer

// try different values here. good displays can go higher.
// 512 for
// example. worse need to go lower. 64 for example
/*
    This value is the amount of cache we have for the display's
    If the displays don't display what you expect to vary the value between 64 and 512

    Default: 128
*/

#define IMG_CACHE_SIZE 128

// How long should the button be pressed before it is registered as a long press (Default: 300, value in milliseconds)
#define LONG_PRESS_DURATION 300

/*
    The boot_delay can be set in order to have some of the screen give some time to start up
    Try values between 500 and 2000.

    Default: 0

*/
#define BOOT_DELAY 0

// What file does contain the configuration
#define CONFIG_NAME "config.bin"

// The max cache (Default:32)
#define MAX_CACHE 32

// Definitions in order to do things quicker in code, by accessing the ports directly
#define DIRECT_PORT
#define I2CPORT PORTD
// A bit set to 1 in the DDR is an output, 0 is an INPUT
#define I2CDDR DDRD

// Pin or port numbers for SDA and SCL
#define BB_SDA 2
#define BB_SCL 3

// If we need I2C delay, based on clock speeds
#if F_CPU > 8000000L
#define I2C_DELAY 2
#else
#define I2C_DELAY 0
#endif