> This template is a general guideline for ISC board specifications. Your board spec should be a high-level overview of what functions the board must have. This document should describe the features of a board, not how the board will be made. This should read like something a non-engineer could look at and understand what this board will do.

> A well-designed board specification should also contain enough information that a reasonably experienced board designer could read the project requirements and design the PCB from scratch. The implementation details should be left up to the person that will actually be designing and making the board.


# Board Name - ac_Horns_v1.0
**Board Requirements**


## Overview and Description
Horn board meant to power a very loud horn. Replaces old horn board

Powered by 24V from low voltage power supply
Receives a digital signal to indicate whether horn should be on or not

- Wiki page: [add link to page]

## High-Level Requirements

	A Horn On/Off which will be a digital signal for whether or not it should be on
	A Horn Output which will output 24V at 150mA

## Communication Protocols
	Uses digital GPIO to switch the horn

## Connectors
        Power in
        Horn Control
        And then 2 Horn outs linked in series

## Buttons/Switches
	Board debug button

## Power System
	24V from Low Voltage bus

## LED Indicators
	LED to indicate whether horn is on or not
