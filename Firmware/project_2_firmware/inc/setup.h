/*
 * This is where all #defines that change the behavior of the system should be.
 * This file is essentially a set-up procedure to make the system function a certain way.
 *	For example this may include the #define for whether to display speed in mph or kph
 *	It could also includes the rate to blink the turn signals. Any functionality of the system
 *	that can be changed should changeable here.
 */

#ifndef MBED15X9_SKELETON_SETUP_H_
#define MBED15X9_SKELETON_SETUP_H_

//how often to check if the CAN controller is working
#define CHECK_CAN_RATE_US 500000

//how long without a feed for watch dog timer to trigger a reset
//be warned this oscialltor is only accurate +/- 40% so make this time bigger than you think you need
#define WDT_TIMEOUT_US 10000000

// Project 1 - how often (in microseconds) to toggle the test LED.
// 1000000 us = 1 second, so the LED blinks once per second (on for 1s, off for 1s).
#define LED_BLINK_RATE_US 1000000

// Project 2 - the potentiometer scales the blink toggle period between these
// two bounds (in microseconds). Pot fully one direction -> fast blink,
// fully the other direction -> slow blink.
#define MIN_BLINK_RATE_US 100000    // 0.1s per toggle -> fast blink
#define MAX_BLINK_RATE_US 2000000   // 2.0s per toggle -> slow blink
//task 1 rate
// PROJECT 1 - You can change the macro name to something more descriptive if you'd like
#define TASK_1_RATE_US 1000000



#endif /* SETUP_H_ */
