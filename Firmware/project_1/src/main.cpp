/*
 * This is where your main program code lives. On reset, after some basic
 * initialization code is run, main() is called.
 */

#include <mbed.h>
#include "pins.h"
#include "peripherals.h"
#include "can_struct.h"
#include "CAN/can_id.h"
#include "CAN/can_data.h"
#include "can_buffer.h"


/*
 * This is an example function. It blinks the heartbeat LED and sends
 * a Heartbeat CAN Message. The message sends when the LED turns on.
 * The heartbeat CAN Message includes the uptime
 */
void heartbeat() {
	if(common.toggleHeartbeatLED())
		common.writeCANMessage(makeMessage(BRIZO_CAN::DEMO_HEART.ID, timer.read_us()));
}

/** Stub to call hardware-interface for checking the CAN controller. */
void checkCANController() {
    common.checkCANController();
}

void setup() {
	//set up the CAN interrupts and handling.
	common.setupCAN();
	//set up LEDs and turn them all off
	common.setupLEDs(&led1, &led2, &led3, &led4);

	//Set Callbacks:
	timing.addCallback(BRIZO_CAN::DEMO_HEART.RATE / 2, heartbeat);
	timing.addCallback(CHECK_CAN_RATE_US, checkCANController);

	bool wdt_reset;
	//start the timing and check for wdt caused reset
	common.startTimingCommon(&timing, &wdt_reset);

	if(wdt_reset){
		// Optional: Log or handle watchdog reset
	}
}

void shutdown_method() {
	while(1) {
		wdt.feed();
	}
}

int main() {
	// Configure all of our peripherals and globals
	setup();
	uint32_t last_task_1_time = timing.onTick(NULL);

	CANMessage msg;
	bool shutdown = false;

	// --- PROJECT 2: Blink interval bounds ---
	const uint32_t MIN_BLINK_US = 200000;   // 0.2 seconds
	const uint32_t MAX_BLINK_US = 2000000;  // 2 seconds

	// Main functionality
	while (!shutdown) {
		bool overflow;
		uint32_t now = common.loopTime(&timing, &overflow);

		//clear CAN Buffer
		while(!common.readCANMessage(msg)) {
			common.toggleReceiveCANLED();
		}

		// --- PROJECT 2: Read potentiometer and scale to blink rate ---
		float pot_val = pot.read(); // returns 0.0–1.0
		uint32_t blink_interval = MIN_BLINK_US + pot_val * (MAX_BLINK_US - MIN_BLINK_US);

		// Toggle LED at dynamic interval
		if (timing.tickThreshold(last_task_1_time, blink_interval)) {
			led_blink = !led_blink;
		}
	}

	shutdown_method();
}
