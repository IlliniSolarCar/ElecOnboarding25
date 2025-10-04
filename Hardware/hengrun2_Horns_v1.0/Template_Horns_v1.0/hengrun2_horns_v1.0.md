> This template is a general guideline for ISC board specifications. Your board spec should be a high-level overview of what functions the board must have. This document should describe the features of a board, not how the board will be made. This should read like something a non-engineer could look at and understand what this board will do.

> A well-designed board specification should also contain enough information that a reasonably experienced board designer could read the project requirements and design the PCB from scratch. The implementation details should be left up to the person that will actually be designing and making the board.


# Board Name: Horn Breakout board
**Board Requirements**


## Overview and Description
- Primary function of the board: The Horn Breakout board provides power to the electronic horn of the solar car. It receives +24V from the Low Voltage Bus Board and a digital signal from the Dash Board to sound a very loud horn.
- Wiki page: https://wiki.illinisolarcar.com/w/index.php/Public:Electrical_Onboarding_Fall_2025#.28Challenge.29_Project_2:_Horns_Board

## High-Level Requirements
- A Horn On/Off which will be a digital signal for whether or not it should be on.
- A Horn Output which will output 24V at 150mA.

## Communication Protocols
- A digital GPIO is used to switch the horn.

## Connectors
- Power In (3-pin connector)
	- GND
	- +24V
	- GND
- Horn Control (2-pin connector)
	- horn control signal
	- GND
- Horn Out (Two 2-pin connector in series)
	- horn control voltage (from Horn Control)
	- +24V

## ICs
- no ICs

## Buttons/Switches
- A debug button to manually trigger the horn.

## Power System
- Input: 24V battery from the LV Bus

## Test Points
- +24V, GND, horn control signal, and horn control voltage