> This template is a general guideline for ISC board specifications. Your board spec should be a high-level overview of what functions the board must have. This document should describe the features of a board, not how the board will be made. This should read like something a non-engineer could look at and understand what this board will do.

> A well-designed board specification should also contain enough information that a reasonably experienced board designer could read the project requirements and design the PCB from scratch. The implementation details should be left up to the person that will actually be designing and making the board.

Project2Horns
Horn Breakout Board

Overview and Description
- The primary function of this board is to power the electronic horn. 
- This board replaces the need for any loose wiring and makes it easier to use the horn function

https://wiki.illinisolarcar.com/w/index.php/Public:Electrical_Onboarding_Fall_2026#.28Challenge.29_Project_2:_Horns_Board 

High-Level Requirements
- A Horn On/Off that will be controlled by a digital signal
- A Horn Output which will output 24V at 150mA

Communication Protocols
- Digital GPIO
	- Power in (INPUT: where the board gets power from)
	- Horn Control (INPUT: where the digital On/Off Signal is received)
		-  Use a transistor to check for High or Low signal. 
	- Two Horn Outs in Series (OUTPUT: the signal the board is sending to the horns)
- Requirements
	- Ground (GND)
	- Pull-down resistor: Stop transistor from floating
	- A resistor between the Horn Control Pin and the Transistor base
	- Flyback diode: Prevents High voltage from destroying the power source by looping current through the 		diode and the coil


Connectors

- Molex Microfit 3x1 connectors (Power)
	- GND
	- +24V
	- GND
- 1x2 Connector (Horn Control)
	- GND
	- "Label"

- 1x2 Connector (Horn Out 1)
	- +24V Input
	- Connect to Horn Out 2 Pin 1
- 1x2 Connector (Horn Out 2)
	- Connect to Horn Out 1 Pin 2 (Takes in the 24V)
	- Horn In

Buttons/Switches
- Add a button between the Horn Control connector and power to test the PCB without needing to use software

Power System
- Power will come from the 24V battery
	- Use a fuse to protect against short circuits
- Signal from steering wheel
	- Use a resistor to limit current

Test Points
- TP_24V: Verifies incoming raw supply voltage from the battery.
- TP_GND: Primary circuit reference point for measurement probe ground clips.
- TP_CTRL: Inspects the digital logic switching signal from the external MCU or debug pushbutton.


LED Indicators
- LED 1 Power/+24V Rail
- LED 2 (Input Signal State): Lights up when the incoming digital GPIO/test button signal is HIGH.
- LED 3: Lights up when the transistor switch successfully pulls low to energize the horn loop.
- LED 4: Configurable debug LED
