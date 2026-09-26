/*
 * This is where you should declare any simple inputs/outputs, like
 * instances of DigitalOut, DigitalIn, AnalogIn, PwmOut, InterruptIn
 * which you might pass in as arguments to more complicated peripherals
 * or use directly.
 *
 * If using macros for pin names do so like so:
 * #define P_LED_FOO P2_4
 *
 * You should place those definitions here.
 */

#ifndef MBED15X9_SKELETON_PINS_H_
#define MBED15X9_SKELETON_PINS_H_

#include <mbed.h>

/*
 *    COMMON PIN DEFINITIONS
 *    UPDATE FOR EACH BOARD!
 */
#define P_CAN_rd P0_13
#define P_CAN_td P0_18
#define P_LED1 P0_9
#define P_LED2 P0_5
#define P_LED3 P0_6
#define P_LED4 P0_7

// Project 1: test LED, wired to the onboarding LED circuit
// LED
#define P_TEST_LED P0_4

/*
 * COMMON PIN OBJECT DECLARATIONS
 */

extern DigitalOut led1;
extern DigitalOut led2;
extern DigitalOut led3;
extern DigitalOut led4;

// Project 1: DigitalOut used to toggle the test LED on/off
// LED
extern DigitalOut test_led;

/*
 * BOARD SPECIFIC PINS
 */

// Project 2: potentiometer used to control the LED blink rate
#define P_POT P0_23
// Potentiometer
// #define P_POT P0_23


/*
 * BOARD SPECIFIC PIN OBJECT DECLARATIONS
 */

// Project 2: AnalogIn reads a voltage 0.0-3.3V and returns it as a float 0.0-1.0
extern AnalogIn pot;

// Potentiometer
// extern AnalogIn pot;
#endif // __MBED1549_SKELETON_PINS_H__
