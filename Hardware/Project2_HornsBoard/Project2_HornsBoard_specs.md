> This template is a general guideline for ISC board specifications. Your board spec should be a high-level overview of what functions the board must have. This document should describe the features of a board, not how the board will be made. This should read like something a non-engineer could look at and understand what this board will do.

> A well-designed board specification should also contain enough information that a reasonably experienced board designer could read the project requirements and design the PCB from scratch. The implementation details should be left up to the person that will actually be designing and making the board.


# Board Name
**Board Requirements**


## Overview and Description
- Primary function: to power the electric horn
- Other board integration
	- Low Voltage Bus Board
	- Dash Board
- Wiki page: [Horns Board](https://wiki.illinisolarcar.com/w/index.php/Public:Electrical_Onboarding_Fall_2025#.28Challenge.29_Project_2:_Horns_Board)

## High-Level Requirements
- Microcontroller (list microcontroller if the board has one)
	- Hyperlinked microcontroller name
		- MCU must be either LPC154X (USB-enabled) or LPC151X (no USB) unless there is a necessary reason to use something else
	- List any specific configuration requirements 
	- How will this board be programmed?
	- List any buttons or switches that control signals to or from the microcontroller
- Features
	- Horn On/Off
		- a digital signal for whether or not it should be on
	- Horn Output
		- output 24 V at 150mA 

## Communication Protocols
- List each communication protocol used to send data to/from other systems or boards
	- Does this board need external components to process data using this protocol?
	- List any requirements needed to properly implement this protocol on the board
- Do not list communication protocols that will be used to connect different components within this PCB unless there is a reason to restrict the board design to a specific protocol
- digital GPIO

## Connectors
 - List any general requirements for connectors here (e.g. no through-hole, low-profile, minimum 1A current capacity, etc.)
 - Then list each connector, specific type/requirements, and pinout such as:
 - Power In (KK 2.54)
	- GND
	- +12V
	- GND
- Horn Control
- 2 Horn outs
	- linked in series

## ICs
- none

## Buttons/Switches
- If the board needs buttons, describe what they do and how they will connect to the board

## Power System
- 24 V from the LV Bus

## Test Points
- Which signals should have test points?

## LED Indicators
- List any functions that should have an LED to indicate they are doing something. Include the 4 default debug LEDs for ISC boards
