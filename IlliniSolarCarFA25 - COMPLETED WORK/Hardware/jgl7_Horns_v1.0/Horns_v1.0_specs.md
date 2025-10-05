> This template is a general guideline for ISC board specifications. Your board spec should be a high-level overview of what functions the board must have. This document should describe the features of a board, not how the board will be made. This should read like something a non-engineer could look at and understand what this board will do.

> A well-designed board specification should also contain enough information that a reasonably experienced board designer could read the project requirements and design the PCB from scratch. The implementation details should be left up to the person that will actually be designing and making the board.


# Board Name: Horns
**Board Requirements**
High Level Requirements Listed Below

## Overview and Description
- What is the primary function of this board?: The primary function of this board is to make a horn mechanism for Illini Solar Car.
- What does this board replace?: This board will (not really) replace the horn for Illini Solar Car
- One or two more bullets (if necessary) talking about other things this board does
- Other board integration (List other boards and communication protocols): We will use a digital GPIO to switch the horn.

- Wiki page: [https://wiki.illinisolarcar.com/w/index.php/Public:Electrical_Onboarding_Fall_2025#.28Challenge.29_Project_2:_Horns_Board]

## High-Level Requirements
* We will have a On/Off mechanism via a digital signal.
* We will have a Horn Output which will output 24V at 150mA

## Communication Protocols
* We will use a digital GPIO to switch the horn.

## Connectors
- Power In
- Horn Control 
- 2 Horn Outs Linked In Series

## ICs
N/A

## Buttons/Switches
N/A

## Power System
- 24V from the LV Bus

## Test Points
- Which signals should have test points?
+24 V, GND, HORN_IN and HORN_CTL will all have test points

## LED Indicators
- List any functions that should have an LED to indicate they are doing something. Include the 4 default debug LEDs for ISC boards




