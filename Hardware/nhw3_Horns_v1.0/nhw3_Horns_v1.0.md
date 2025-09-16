# Nathan's Horns Board
**Board Requirements**


## Overview and Description
- The primary function of this board is to power the two electronic horns (wired in series) on the car
- Would replace the existing horns board (?)
- Gets +24V from the Low Voltage Bus Board and a digital signal from the Dash Board
- Wiki page: [(https://wiki.illinisolarcar.com/w/index.php/Public:Electrical_Onboarding_Fall_2025#.28Challenge.29_Project_2:_Horns_Board)]

## High-Level Requirements
- No Microcontrollers
- Features
	- Digital Horn On/Off signal 
	- 24V/150mA Horn Output
	- Optional: Debugging capability

## Communication Protocols
- Digital GPIO to switch horn

## Connectors
 - General Requirements: Low-Profile
 - Power In (KK 2.54, 1x3)
	- GND
	- +24V
	- GND
 - Horn Control (KK 2.54, 1x2)
	- GND
	- Horn On/Off
 - Horn Out 1 (KK 2.54, 1x2)
	- HORN_IN
	- 24V
 - Horn Out 2 (KK 2.54, 1x2)
	- HORN_IN
	- 24V
 - NOTE: Horn Out 1 and 2 are in series

## ICs
- No ICs

## Buttons/Switches
- Optional button to manually debug board

## Power System
- 24V from the LV Bus
	- Reverse polarity protection

## Test Points
- 24V Power In
- GND
- Horn Control
- Horn Out 1 and 2

## LED Indicators
- Horn Control LED indicating On/Off
- 24V Power input LED
- 4 Standard ISC Debugging LEDs
