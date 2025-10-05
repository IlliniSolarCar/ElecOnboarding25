> This template is a general guideline for ISC board specifications. Your board spec should be a high-level overview of what functions the board must have. This document should describe the features of a board, not how the board will be made. This should read like something a non-engineer could look at and understand what this board will do.

> A well-designed board specification should also contain enough information that a reasonably experienced board designer could read the project requirements and design the PCB from scratch. The implementation details should be left up to the person that will actually be designing and making the board.


# Board Name: Horns Breakout Board
**Board Requirements**


## Overview and Description
- The primary function of the board is to power and control two horns connected in series to sound a very loud horn
- This board replaces having to manually wire voltage to the electric horn and thus provides a safer interface
- The board receives 24V from LV Bus Board and a digital horn control signal from the Dash Board
- The board will output 24V at 150mA to drive the two horns connected in series
- Other board integration
	- Dash Board (CAN)
	- Low Voltage Bus Board (USB)
- Wiki page: [add link to page]

## High-Level Requirements
- No microcontroller required
- Required features
	- Horn On/Off Control
		- A digital GPIO input signal that enables and disables the horn output
	- Horn Output
		- Supplies 24V at 150mA for the horns connected in series
	- Power Input 
		- Accepts 24V from Low Voltage Bus 
	- Outputs
		- Two horn outputs for connecting the horns in series

## Communication Protocols
- Digital GPIO 
	 - Used to switch horn on/off
	 - No additional ICs are required

## Connectors
- Low-profile connectors rated for at least 200 mA, 24V 
 - List any general requirements for connectors here (e.g. no through-hole, low-profile, minimum 1A current capacity, etc.)
 - Then list each connector, specific type/requirements, and pinout such as:
 - Power In (from LV Bus Board)
	- GND
	- +24V
- Horn Control (from Dash Board)
	- GPIO control input
	- GND
- Horn Out 1 
	- Horn+
	- Horn-
- Horn Out 2
	- Horn+
	- Horn-

## ICs
- None required

## Buttons/Switches
- None required

## Power System
- Power source: +24V from LV Bus Board
	- Originates from the LV Bus Board
	- Overcurrent protection, reverse polarity protection
	- Minimum current handling of 150mA

## Test Points
- Test point for +24V input rail 

## LED Indicators
- LED for horn activation (lit when GPIO enables horns)
