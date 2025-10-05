> This template is a general guideline for ISC board specifications. Your board spec should be a high-level overview of what functions the board must have. This document should describe the features of a board, not how the board will be made. This should read like something a non-engineer could look at and understand what this board will do.

> A well-designed board specification should also contain enough information that a reasonably experienced board designer could read the project requirements and design the PCB from scratch. The implementation details should be left up to the person that will actually be designing and making the board.


# Board Name
**Board Requirements**


## Overview and Description
- What is the primary function of this board?
To power the electric horn
- What does this board replace? N/A
- One or two more bullets (if necessary) talking about other things this board does


## High-Level Requirements
- A Horn On/Off which will be a digital signal for whether or not it should be on
- A Horn Output which will output 24V at 150mA

## Communication Protocols
- GPIO
## Connectors
- Power in
- Horn Control
- And then 2 Horn outs linked in series

## ICs
- n/a
## Buttons/Switches
- You can choose to add a Button that would be used to debug the board

## Power System
- The power system is 24V from the LV Bus

## Test Points
- You should add test points to any net you would like to add

## LED Indicators
- You can add LED Indicators to any net you would like
