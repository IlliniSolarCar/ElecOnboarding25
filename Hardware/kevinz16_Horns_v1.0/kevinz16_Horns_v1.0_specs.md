# Horns Breakout Board
**Board Requirements**


## Overview and Description
- The Horns Breakout Board controls two horns wired in series using a simple digital GPIO control signal.
- This board provides an interface between the LV and the horns
- Other board integration
	- Controller Board (GPIO input)
	- LV Power Distribution Board (24V supply)
- Wiki page: [add link to page]

## High-Level Requirements
- Required Features
	- Digital On/Off horn control via external GPIO input.
	- Horn power output: 24V at 150 mA, supporting two horns in series.	- 
	- Board must pass LV Bus power directly to horns when enabled.
	- Provide at least one optional debug button to locally actuate the horn.
	- Include protection and isolation between control input and horn output power switching.

## Communication Protocols
- Digital GPIO Input
	- One active-high GPIO line controls horn activation.
	- No external data processing required.

## Connectors
 - General Requirements
	- All connectors should be keyed and polarized to prevent misconnection.
	- Must support at least 500 mA current rating.
 - Power In
	- GND
 	- +24V LV Bus
 - Horn Control
	- Control GPIO Input
	- GND
 - Horn Out 1
	- Horn Output (to first horn in series)
	- GND
 - Horn Out 2
	- Horn Output (from first horn to second horn in series)
	- GND

## ICs
- None required

## Buttons/Switches
- None required

## Power System
- 24V LV Bus
	- Input protection
	- Must reliably deliver 24V at 150 mA to horns
	- Filtering for noise immunity

## Test Points
- Power In
- Horn Control GPIO Input
- Horn Output Net

## LED Indicators
- None required
