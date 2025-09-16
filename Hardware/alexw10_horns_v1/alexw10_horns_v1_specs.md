# Board Name
alexw10_horns_v1
**Board Requirements**



## Overview and Description
- What is the primary function of this board?

horn driver/switch

- What does this board replace? I assume this replaces a bunch of wires



## High-Level Requirements

take in simple digital signal for whether horn should be on or not
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
- List each communication protocol used to send data to/from other systems or boards
	- Does this board need external components to process data using this protocol?
	- List any requirements needed to properly implement this protocol on the board
- Do not list communication protocols that will be used to connect different components within this PCB unless there is a reason to restrict the board design to a specific protocol

basic digital high/low signal


## Connectors
 - List any general requirements for connectors here (e.g. no through-hole, low-profile, minimum 1A current capacity, etc.)
 - Then list each connector, specific type/requirements, and pinout such as:


 - Power In: 1x3 pin connector, GND +24 GND, nominal 150mA
 - Control: Signal and GND
 - Outputs: 2x 1x2 pin connectors, one horn (power/gnd) for each ofthe connectors, nominally 150mA

## ICs
- Only list specific ICs if the board require this specific component to work
none

## Buttons/Switches
none

## Power System
voltage comes from 24V LV bus, we will use 2A fuse as well as a flyback diode

## Test Points
Have test points for both the signal and the power

## LED Indicators
- List any functions that should have an LED to indicate they are doing something. Include the 4 default debug LEDs for ISC boards
