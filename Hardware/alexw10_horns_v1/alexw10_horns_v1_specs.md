# Board Name
alexw10_horns_v1
**Board Requirements**



## Overview and Description
- What is the primary function of this board?

horn driver/switch

- What does this board replace? I assume this replaces a bunch of wires



## High-Level Requirements

take in simple digital signal from microcontroller for whether horn should be on or not
signal controls 24V 150mA output
digital GPIO to switch horn


- Microcontroller: none

- List any features this board must have
	- Describe each feature in a general way
		- (Optional) Describe any requirements this feature might need as open-ended as possible

when the digital signal is high, 24V 150mA should be put through/across the horns
When the digital signal is low, don't
make this easy to debug, don't fry the board, connects to 24V LV bus





## Communication Protocols
none


## Connectors
 - List any general requirements for connectors here (e.g. no through-hole, low-profile, minimum 1A current capacity, etc.)
 - Then list each connector, specific type/requirements, and pinout such as:



 - Power In: 1x3 pin connector, GND +24 GND, nominal 150mA
 - Control: Signal and GND
 - Outputs: 2x 1x2 pin connectors, one horn (power/gnd) for each ofthe connectors, nominally 150mA, direction doesnt matter
 - this design uses molex connectors kk-254 connectors but they can be substituted for whatever connector is actually needed, holes for connectors
 - are 0.1 inch spaced

## ICs
- Only list specific ICs if the board require this specific component to work
none

## Buttons/Switches
1 push button - when the button is not pushed down, there is normal operation in that a high from the microcontroller will make the horn sound
- when the button is pushed down, the microcontroller signal is disconnected, and 3.3V from a voltage divider is applied to the gate of the mosfet, which makes the horn sound
- horn sounds whenever the button is pushed down, when but is not pushed down the horn sounding depends on the microcontroller

## Power System
voltage comes from 24V LV bus, we will use 2A fuse as well as a flyback diode

## Test Points
Have test points for both the signal and the power

## LED Indicators
- red LED on board indicates 24V is plugged in, green led indicates the microcontroller signal is reaching the input connector of the board
