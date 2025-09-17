> This template is a general guideline for ISC board specifications. Your board spec should be a high-level overview of what functions the board must have. This document should describe the features of a board, not how the board will be made. This should read like something a non-engineer could look at and understand what this board will do.

> A well-designed board specification should also contain enough information that a reasonably experienced board designer could read the project requirements and design the PCB from scratch. The implementation details should be left up to the person that will actually be designing and making the board.


# Horns Board
**Board Requirements**


## Overview and Description
- What is the primary function of this board? The Horn Breakout board powers the electronic horn.
- What does this board replace? N/A
- One or two more bullets (if necessary) talking about other things this board does
- Other board integration (List other boards and communication protocols)
	- +24V from Low Voltage Bus Board
	- Digital signal from Dash Board
- Wiki page: [add link to page]

## High-Level Requirements
- Horn On/Off (digital signal for whether or not it should be on)
- Horn Output (24V at 150mA)

## Communication Protocols
- Digital GPIO to switch the horn

## Connectors
 - Power In 
	- GND
	- +24V
	- GND
 - Horn Control
 - 2 Horn Outs
	- linked in series

## ICs

## Buttons/Switches

## Power System
- 24V from the LV Bus

## Test Points

## LED Indicators