
#ifndef MBED15X9_SKELETON_PINS_H_
#define MBED15X9_SKELETON_PINS_H_

#include <mbed.h>
#define P_CAN_rd P0_13
#define P_CAN_td P0_18
#define P_LED1 P0_9
#define P_LED2 P0_5
#define P_LED3 P0_6
#define P_LED4 P0_7

#define P_LED_HEARTBEAT P0_4
extern DigitalOut led1;
extern DigitalOut led2;
extern DigitalOut led3;
extern DigitalOut led4;
extern DigitalOut led_heartbeat;
#endif
