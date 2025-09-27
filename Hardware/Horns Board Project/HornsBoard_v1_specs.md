
# Horns Board
**Board Requirements**


## Overview and Description
-The board provides power to sound a loud horn
-This board takes in +24V from the Low Breakout board and a digital signal from the Dash Board
- Other board integration
	- Low Voltage Bus Board
	- Dash Board


## High-Level Requirements
- A Horn On/Off which will be a digital signal for whether or not it should be on
- A Horn Output which will output 24V at 150mA

## Communication Protocols
- digital GPIO to switch the horn

## Connectors
 - Power In (KK 2.54)
	- GND
	- +24V
	- GND
 - Horn Control (KK 2.54)
	- HORN_IN
	- +24V
 - 2 Horn Out (KK 2.54)
	- HORN_IN
	- +24V

## Power System
- 24V from the LV Bus

## Test Points
- Which signals should have test points?

## LED Indicators
- List any functions that should have an LED to indicate they are doing something. Include the 4 default debug LEDs for ISC boards
