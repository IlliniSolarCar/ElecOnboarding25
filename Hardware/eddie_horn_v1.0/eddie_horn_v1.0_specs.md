# Board Name
Eddie's awesome horn board

# Overview and Description

- This board provides control and power distribution for two horns connected in series.
- It replaces any ad hoc wiring or manual horn activation setup.
- It ensures reliable 24V/150mA switching per horn with simple GPIO control.
- Other board integration:

  - Board 1 (CAN)
  - Board 2 (USB)
- Wiki page: \[add link to page]

# High-Level Requirements

- No microcontroller is used on this board.
- Primary features:

  - **Horn On/Off Control**: Accepts a digital GPIO input to switch horns.
  - **Horn Output**: Provides 24V at 150mA for each horn, connected in series.
  - Debug capability: optional manual pushbutton to trigger horn output.

# Communication Protocols

- Digital GPIO
  - Used to switch horn on/off.
  - No external components required beyond standard switching circuitry.

# Connectors

- General requirements: low-profile, min. 1A current capacity.
- Power In (KK 2.54) (1x3, actually)
  - GND
  - +24V (from LV Bus)
- Horn Control (KK 2.54) (1x2)
  - GND
  - Horn Enable (digital GPIO)
- Horn Out 1 (KK 2.54) (1x2)
  - GND
  - Horn+ (24V @ 150mA)
- Horn Out 2 (KK 2.54) (1x2)
  - GND
  - Horn+ (24V @ 150mA)

## ICs

- None.

## Buttons/Switches

- Optional debug pushbutton to manually activate horn output.

## Power System

- Input: 24V from LV Bus.
- Protection: reverse polarity protection, basic filtering, and overcurrent protection as required.
- Must deliver steady 24V @ 150mA per horn.

## Test Points

- Some possible test points:
  - 24V in
  - GND
  - Horn Control GPIO
  - Horn Outputs

## LED Indicators

- Horn On/Off state indicator (per horn).
- Power input good indicator.
- Standard 4 debug LEDs for ISC boards.
