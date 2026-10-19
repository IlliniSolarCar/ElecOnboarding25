> This template is a general guideline for ISC board specifications. Your board spec should be a high-level overview of what functions the board must have. This document should describe the features of a board, not how the board will be made. This should read like something a non-engineer could look at and understand what this board will do.

> A well-designed board specification should also contain enough information that a reasonably experienced board designer could read the project requirements and design the PCB from scratch. The implementation details should be left up to the person that will actually be designing and making the board.


# rowanpw2_Horns_v1.0


## Overview and Description
- This board will help deliver the signal that will sound the electric horn mounted on the solar car.
- The full board will consist of two of these PCBs in series with each other. 

## High-Level Requirements
- There are two main requirements:
	1) A Horn On/Off (a digital signal) for whether or not it should be on
	2) A Horn Output which will output 24V at 150mA

## Communication Protocols
- A digital GPIO will be used to switch the horn

## Connectors
 - The board has 4 connectors:
     - Power in (INPUT)
     - Horn Control (INPUT)
     - 2 "Horn Outs" linked in series (OUTPUT)

## ICs
- This board will not use any ICs.

## Buttons/Switches
- This board will use a single button for debuggin purposes.

## Power System
- The board will use +24V from the Low Voltage Bus Board.

## Test Points
- Which signals should have test points?

## LED Indicators
- List any functions that should have an LED to indicate they are doing something. Include the 4 default debug LEDs for ISC boards
