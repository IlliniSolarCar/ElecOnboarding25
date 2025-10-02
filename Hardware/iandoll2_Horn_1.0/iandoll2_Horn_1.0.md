> This template is a general guideline for ISC board specifications. Your board spec should be a high-level overview of what functions the board must have. This document should describe the features of a board, not how the board will be made. This should read like something a non-engineer could look at and understand what this board will do.

> A well-designed board specification should also contain enough information that a reasonably experienced board designer could read the project requirements and design the PCB from scratch. The implementation details should be left up to the person that will actually be designing and making the board.


# Board Name
Horn Breakout Board
**Board Requirements**


## Overview and Description
- Connects two horns in series based off an input

## High-Level Requirements
- Horn On/off
	- Digital Signal for turning on/off
- Horn Output
	- Output 24V at 150mA

## Communication Protocols
- digital GPIO

## Connectors
 - List any general requirements for connectors here (e.g. no through-hole, low-profile, minimum 1A current capacity, etc.)
 - Then list each connector, specific type/requirements, and pinout such as:
 - Power In (KK 2.54)
	- GND
	- +12V
	- GND
 - Two Horn Outs, linked in series
 - Horn Control

## ICs
- No ICs

## Power System
- 24V from LV Bus

## Test Points
- Which signals should have test points?


