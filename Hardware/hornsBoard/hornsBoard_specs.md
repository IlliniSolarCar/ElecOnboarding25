> This template is a general guideline for ISC board specifications. Your board spec should be a high-level overview of what functions the board must have. This document should describe the features of a board, not how the board will be made. This should read like something a non-engineer could look at and understand what this board will do.

> A well-designed board specification should also contain enough information that a reasonably experienced board designer could read the project requirements and design the PCB from scratch. The implementation details should be left up to the person that will actually be designing and making the board.


# Board Name
Horns board

## Overview and Description
Control and power 2 horns

## High-Level Requirements
Horn control
 - Signalling to the horn to be on or off
 
 Horn otutput
  - Provides 24V to the horn

## Communication Protocols
 - Digital GPIO
   - Used to control the horn 

## Connectors
 - Power in
 - Horn control
 - 2 Horn outs linked in series

## ICs
 - No ICS

## Buttons/Switches
 - No buttons or switches

## Power System
 - +24V from the LV bus

## Test Points
 - No test points

## LED Indicators
 - LED to show the horn is active
