> This template is a general guideline for ISC board specifications. Your board spec should be a high-level overview of what functions the board must have. This document should describe the features of a board, not how the board will be made. This should read like something a non-engineer could look at and understand what this board will do.

> A well-designed board specification should also contain enough information that a reasonably experienced board designer could read the project requirements and design the PCB from scratch. The implementation details should be left up to the person that will actually be designing and making the board.


Horn Project Board
**Board Requirements**


## Overview and Description
- What is the primary function of this board?
	The primary function of this board is to develop a system to press a button and have a horn go off. (Similar to honking in a car).
- What does this board replace?
	A direct, ad-hoc horn drive; provides proper switching, protection, decoupling, and standard connectors for the horn circuit.
- One or two more bullets (if necessary) talking about other things this board does
	-Protect LV bus and wiring
	- Provide status/debug indicators 
- Other board integration (List other boards and communication protocols)
	- 24 V power input.
	- digital horn control input (GPIO).
	- Horns: two horn connectors wired in series 	
- Wiki page: https://wiki.illinisolarcar.com/w/index.php/Public:Electrical_Onboarding_Fall_2025#.28Challenge.29_Project_2:_Horns_Board

## High-Level Requirements
- Microcontroller None necessary 
	-One digital input enabling the horn output. (Horn Control)
	-Debounce/noise filter

	-Switch +24 V to a series pair of horns; nominal load current (Horn Output)

	-Power Input +24 from LV bus

	-Power present and Horn-active LEDs

	-four default ISC debug LEDs

## Communication Protocols
- Do not list communication protocols that will be used to connect different components within this PCB unless there is a reason to restrict the board design to a specific protocol

## Connectors
-Through-hole
-Current capacity > 2A per power pin

Power in:
	GND -+24V -GND
Horn Control
	GND - HORN_CTL
Horn Out A
	HORN_IN-HORN_OUT-A
Horn Out B
	HORN_OUT_A -+24V

## ICs
None for this lab

## Buttons/Switches
Optional debug switches

## Power System
24 V from LV Bus Board and GND
Series fuse (2A) for protection. 
Input decoupling using capacitors.


## Test Points
-+24V, GND
-HORN_CTL (after RC filter)
-GATE
-HORN_IN
-HORN_OUT_A


## LED Indicators
LED0: Power present (+24 V OK)
LED1: Horn Active (mirrors gate or HORN_IN)
LED2: Fault / Fuse (optional; designer can implement with sense or left DNP)
LED3: User/Debug (free)
