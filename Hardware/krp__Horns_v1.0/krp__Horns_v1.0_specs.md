> This template is a general guideline for ISC board specifications. Your board spec should be a high-level overview of what functions the board must have. This document should describe the features of a board, not how the board will be made. This should read like something a non-engineer could look at and understand what this board will do.

> A well-designed board specification should also contain enough information that a reasonably experienced board designer could read the project requirements and design the PCB from scratch. The implementation details should be left up to the person that will actually be designing and making the board.


# Horn
**Board Requirements**


## Overview and Description
- 2 horns for the car

## High-Level Requirements
- A Horn On/Off which will be a digital signal for whether or not it should be on
-A Horn Output which will output 24V at 150mA

## Communication Protocols
-  digital GPIO to switch the horn

## Connectors
 - Power in
 - Horn Control
 - And then 2 Horn outs linked in series

## ICs
- None

## Buttons/Switches
- Push Button

## Power System
- 24V from the LV Bus

## Test Points
- Which signals should have test points?

## LED Indicators
- List any functions that should have an LED to indicate they are doing something. Include the 4 default debug LEDs for ISC boards
