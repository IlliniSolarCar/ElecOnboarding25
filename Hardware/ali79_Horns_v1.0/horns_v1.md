> This template is a general guideline for ISC board specifications. Your board spec should be a high-level overview of what functions the board must have. This document should describe the features of a board, not how the board will be made. This should read like something a non-engineer could look at and understand what this board will do.

> A well-designed board specification should also contain enough information that a reasonably experienced board designer could read the project requirements and design the PCB from scratch. The implementation details should be left up to the person that will actually be designing and making the board.


# Horns Board
**Board Requirements**


## Overview and Description
- What is the primary function of this board? To power and sound the car horn
- What does this board replace? N/A
- One or two more bullets (if necessary) talking about other things this board does
- Other board integration (List other boards and communication protocols)
	- Board 1 (CAN)
	- Board 2 (USB)
- Wiki page: https://wiki.illinisolarcar.com/w/index.php/Public:Electrical_Onboarding_Fall_2025#.28Challenge.29_Project_2:_Horns_Board

## High-Level Requirements
- A Horn On/Off which will be a digital signal for whether or not it should be on
- A Horn Output which will output 24V at 150mA

## Communication Protocols
- Digital GPIO to switch the horn

## Connectors
 - Power in
	- GND
	- +12V
	- GND
 - Horn Control
	- GND
	- Net Label
 - 2 Horn outs linked in series
	- HORN_IN
	- +24V

## ICs
- N/A

## Buttons/Switches
- Optional button to debug the board

## Power System
- 24V from the LV Bus

## Test Points
- Every net added

## LED Indicators
- Any net you want
- 4 default debug LEDs for ISC boards: CPU, DRAM, VGA, BOOT
