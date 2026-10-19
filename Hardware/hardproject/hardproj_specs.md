> This template is a general guideline for ISC board specifications. Your board spec should be a high-level overview of what functions the board must have. This document should describe the features of a board, not how the board will be made. This should read like something a non-engineer could look at and understand what this board will do.

> A well-designed board specification should also contain enough information that a reasonably experienced board designer could read the project requirements and design the PCB from scratch. The implementation details should be left up to the person that will actually be designing and making the board.


# Board Name
Horns Board
**Board Requirements**


## Overview and Description
- What is the primary function of this board?
The primary functions of this board is to receive power from the Low Voltage Bus Board, as well as the signal from the dashboard to then control the horn; i.e. when the driver activates the horn on their dashboard, the board will signal the horn to honk.
- What does this board replace?
This board may replace previous designs of the horns board, but it's primarily an independent board which won't "replace" another board. 
- One or two more bullets (if necessary) talking about other things this board does
- Other board integration (List other boards and communication protocols)
	- Dash Board (Digital GPIO)
	- Low Voltage Bus Board (24V line/wire)
- Wiki page: [Link to onboarding](https://wiki.illinisolarcar.com/w/index.php/Public:Electrical_Onboarding_Fall_2026)

## High-Level Requirements
- Microcontroller (list microcontroller if the board has one)
- List any features this board must have
	- Horn input
		- Be able to receive a digital signal on whether of not the horn should be on/off
	- Horn output
		- Output 24V at 150mA to 2x [PS-983Q](https://www.digikey.com/en/products/detail/mallory-sonalert-products-inc/PS-983Q/3196389) wired in series

## Communication Protocols
- Digital GPIO
	- The board does need external components to process this data.
	- The MOSFET would need to be properly working so that it can actually receive the GPIO's high voltage. The two boards would also be required to have a shared ground.

## Connectors
 - List any general requirements for connectors here (e.g. no through-hole, low-profile, minimum 1A current capacity, etc.)
 - Power In (KK 2.54, 1x3)
	- GND
	- +24V
	- GND
 - Horn Out 1 (KK 2.54, 1x2)
 - Horn Out 2 (KK 2.54, 1x2)
 - Horn Control (KK 2.54, 1x2)
	- HORN_CTL
	- GND

## ICs
- N/A

## Buttons/Switches
- N/A

## Power System
- Low Voltage Bus Board
	- 24 VDC
	- 2A fuse between the MOSFET and the connectors
	- Rectifier diode from HORN_IN to 24V
	- 3-pin power connector
	- Capacitors to decouple the current

## Test Points
- Signal points near the Horn Out 

## LED Indicators
- N/A
