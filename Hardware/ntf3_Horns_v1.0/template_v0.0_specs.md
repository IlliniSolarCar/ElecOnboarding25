> This template is a general guideline for ISC board specifications. Your board spec should be a high-level overview of what functions the board must have. This document should describe the features of a board, not how the board will be made. This should read like something a non-engineer could look at and understand what this board will do.

> A well-designed board specification should also contain enough information that a reasonably experienced board designer could read the project requirements and design the PCB from scratch. The implementation details should be left up to the person that will actually be designing and making the board.


# ntf3_Horns_v1.0
**Board Requirements**


## Overview and Description
- The board controls the activation of two horns on the solar car
- The board receives a control signal that determines when the horns activate
- The board distributes power to both horns
- Wiki page: TBD

## High-Level Requirements
- Must control two horns connected in series
- Must activate or deactivate the horns based on the external digital signal
- Must provide a 24 V, 150 mA output to the horns
- Must include a protection against unwanted electrical noise and electrical shorts

## Communication Protocols
 - No communication protocols besides a digital GPIO to switch the horn

## Connectors
 - Power input connector: +24 V and GND
 - Horn counter connector: digital control signal and GND
 - Two horn output connectors: connections for the two horns

## ICs
 - No ICs required

## Buttons/Switches
 - No physical buttons or switches required

## Power System
 - The board receives a +24 V power supply
 - The board must provide the power necessary to operate the horns


## Test Points
 - Power supply voltage
 - Horn control signal
 - Horn output

## LED Indicators
- No LED indicators required
