> This template is a general guideline for ISC board specifications. Your board spec should be a high-level overview of what functions the board must have. This document should describe the features of a board, not how the board will be made. This should read like something a non-engineer could look at and understand what this board will do.

> A well-designed board specification should also contain enough information that a reasonably experienced board designer could read the project requirements and design the PCB from scratch. The implementation details should be left up to the person that will actually be designing and making the board.


# Horns Breakout Board v1.0

**Board Requirements**


## Overview and Description
- The primary function of this board is to control and power two horns connected in series for the solar car. It allows a digital on/off switch to be used from the dashboard.
- This board replaces any manual horn switch system by changing it to completely digital.
- Since the board has a fuse, it provides overcurrent protection preventing the horn or electronics from getting fried.
- Other board integration (List other boards and communication protocols)
	- Low voltage bus board - provides a +24V input
	- Dashboard - uses digital GPIO signal to control horn being on or off
- Wiki page: [https://wiki.illinisolarcar.com/w/index.php/Public:Electrical_Onboarding_Fall_2025#Windows]

## High-Level Requirements
- Microcontroller - none required since board is a simple power switcher
- List any features this board must have
	- A horn on/off signal from the GPIO from the dashboard
	- Horn output capable of 24V at 150mA to drive the two horns in series
	- An RC filter that creates noise reduction on the control signal
	- A 2A fuse that creates overcurrent protection
	- A diode that creates reverse-voltage protection
	- An optional "debug" button to manually activate the horn

## Communication Protocols
- Digital GPIO from Dashboard to Horn Control
	- No external IC
	- Signal should switch MOSFET gate between high value and low value
- 24V power input from LV bus, no communications required

## Connectors
 - General requirements:
	- low-profile
	- through-hole acceptable
	- rated for a minimum of 2A current
 - Power In (1x3 KK 2.54)
	- GND (pin 1)
	- +12V (pin 2)
	- GND (pin 3)
- Horn Control (1x2 KK 2.54)
	- GND (pin 1)
	- HORN_CTL (pin 2)
- Horn Out 1 (1x2 KK 2.54)
	- HORN_IN (pin 1)
	- HORN_OUT (pin 2)
- Horn Out 2 (1x2 KK 2.54)
	- HORN_IN (pin 1)
	- HORN_OUT (pin 2)

## ICs
- None required

## Buttons/Switches
- Debug Button (optional)
	- Connected between HORN_CTL and GND
	- Used to manually trigger horn for testing

## Power System
- +24V input from Low Voltage Bus Board
	- GND reference required
	- 2A fuse to protect from overcurrent
	- decoupling capacitors to filter voltage spikes
- Must output 24V to horns at 150mA consistently and effectively

## Test Points
- HORN_CTL (before MOSFET)
- HORN_OUT (after the MOSFET, but before fuse)
- +24V and GND rails

## LED Indicators
- optional LED for horn on/off status
	- connected across MOSFET gate and GND via current-limiting resistor
- 4 default debug LEDs for general testing of the board
