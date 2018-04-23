EESchema Schematic File Version 2
LIBS:power
LIBS:device
LIBS:switches
LIBS:relays
LIBS:motors
LIBS:transistors
LIBS:conn
LIBS:linear
LIBS:regul
LIBS:74xx
LIBS:cmos4000
LIBS:adc-dac
LIBS:memory
LIBS:xilinx
LIBS:microcontrollers
LIBS:dsp
LIBS:microchip
LIBS:analog_switches
LIBS:motorola
LIBS:texas
LIBS:intel
LIBS:audio
LIBS:interface
LIBS:digital-audio
LIBS:philips
LIBS:display
LIBS:cypress
LIBS:siliconi
LIBS:opto
LIBS:atmel
LIBS:contrib
LIBS:valves
LIBS:ws2812b
LIBS:ThreeLedGlobe-cache
EELAYER 25 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L WS2812B LED1
U 1 1 5A494509
P 5950 3650
F 0 "LED1" H 5950 3250 60  0000 C CNN
F 1 "WS2812B" H 5950 4050 60  0000 C CNN
F 2 "WS2812B:WS2812B" V 5900 3650 60  0001 C CNN
F 3 "" V 5900 3650 60  0000 C CNN
	1    5950 3650
	1    0    0    -1  
$EndComp
Text Label 5450 3450 0    60   ~ 0
VCC
Text Label 5450 3850 0    60   ~ 0
DOUT
Text Label 6450 3850 0    60   ~ 0
GND
$Comp
L Conn_01x05 J1
U 1 1 5A4CFE42
P 3350 3500
F 0 "J1" H 3350 3800 50  0000 C CNN
F 1 "Conn_01x05" H 3350 3200 50  0000 C CNN
F 2 "SmallHeader:5_PIN_TIGHT" H 3350 3500 50  0001 C CNN
F 3 "" H 3350 3500 50  0001 C CNN
	1    3350 3500
	1    0    0    -1  
$EndComp
Text Label 3150 3300 0    60   ~ 0
DIN
Text Label 3150 3700 0    60   ~ 0
DOUT
Text Label 3150 3400 0    60   ~ 0
GND
Text Label 3150 3500 0    60   ~ 0
VCC
Text Label 3150 3600 0    60   ~ 0
GND
$Comp
L Conn_01x05 J2
U 1 1 5A4CFF32
P 3850 3500
F 0 "J2" H 3850 3800 50  0000 C CNN
F 1 "Conn_01x05" H 3850 3200 50  0000 C CNN
F 2 "SmallHeader:5_PIN_TIGHT" H 3850 3500 50  0001 C CNN
F 3 "" H 3850 3500 50  0001 C CNN
	1    3850 3500
	1    0    0    -1  
$EndComp
Text Label 3650 3300 0    60   ~ 0
DIN
Text Label 3650 3700 0    60   ~ 0
DOUT
Text Label 3650 3400 0    60   ~ 0
GND
Text Label 3650 3500 0    60   ~ 0
VCC
Text Label 3650 3600 0    60   ~ 0
GND
$Comp
L Conn_01x05 J3
U 1 1 5A4CFF68
P 4350 3500
F 0 "J3" H 4350 3800 50  0000 C CNN
F 1 "Conn_01x05" H 4350 3200 50  0000 C CNN
F 2 "SmallHeader:5_PIN_TIGHT" H 4350 3500 50  0001 C CNN
F 3 "" H 4350 3500 50  0001 C CNN
	1    4350 3500
	1    0    0    -1  
$EndComp
Text Label 4150 3300 0    60   ~ 0
DIN
Text Label 4150 3700 0    60   ~ 0
DOUT
Text Label 4150 3400 0    60   ~ 0
GND
Text Label 4150 3500 0    60   ~ 0
VCC
Text Label 4150 3600 0    60   ~ 0
GND
$Comp
L Conn_01x05 J5
U 1 1 5A4CFF73
P 4850 3500
F 0 "J5" H 4850 3800 50  0000 C CNN
F 1 "Conn_01x05" H 4850 3200 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x05_Pitch2.54mm" H 4850 3500 50  0001 C CNN
F 3 "" H 4850 3500 50  0001 C CNN
	1    4850 3500
	1    0    0    -1  
$EndComp
Text Label 4650 3300 0    60   ~ 0
DIN
Text Label 4650 3700 0    60   ~ 0
DOUT
Text Label 4650 3400 0    60   ~ 0
GND
Text Label 4650 3500 0    60   ~ 0
VCC
Text Label 4650 3600 0    60   ~ 0
GND
$Comp
L Conn_01x05 J4
U 1 1 5A4CFF95
P 4750 4200
F 0 "J4" H 4750 4500 50  0000 C CNN
F 1 "Conn_01x05" H 4750 3900 50  0000 C CNN
F 2 "SmallHeader:5_PIN_TIGHT" H 4750 4200 50  0001 C CNN
F 3 "" H 4750 4200 50  0001 C CNN
	1    4750 4200
	1    0    0    -1  
$EndComp
Text Label 4550 4000 0    60   ~ 0
DIN
Text Label 4550 4400 0    60   ~ 0
DOUT
Text Label 4550 4100 0    60   ~ 0
GND
Text Label 4550 4200 0    60   ~ 0
VCC
Text Label 4550 4300 0    60   ~ 0
GND
$Comp
L WS2812B LED2
U 1 1 5A4E621B
P 7550 3650
F 0 "LED2" H 7550 3250 60  0000 C CNN
F 1 "WS2812B" H 7550 4050 60  0000 C CNN
F 2 "WS2812B:WS2812B" V 7500 3650 60  0001 C CNN
F 3 "" V 7500 3650 60  0000 C CNN
	1    7550 3650
	1    0    0    -1  
$EndComp
Text Label 7050 3450 0    60   ~ 0
VCC
Text Label 8050 3850 0    60   ~ 0
GND
$Comp
L WS2812B LED3
U 1 1 5A4E626A
P 9050 3650
F 0 "LED3" H 9050 3250 60  0000 C CNN
F 1 "WS2812B" H 9050 4050 60  0000 C CNN
F 2 "WS2812B:WS2812B" V 9000 3650 60  0001 C CNN
F 3 "" V 9000 3650 60  0000 C CNN
	1    9050 3650
	1    0    0    -1  
$EndComp
Text Label 8550 3450 0    60   ~ 0
VCC
Text Label 9550 3450 0    60   ~ 0
DIN
Text Label 9550 3850 0    60   ~ 0
GND
Wire Wire Line
	8550 3850 8550 3600
Wire Wire Line
	8550 3600 8050 3600
Wire Wire Line
	8050 3600 8050 3450
Wire Wire Line
	7050 3850 7050 3650
Wire Wire Line
	7050 3650 6450 3650
Connection ~ 6450 3450
$Comp
L R R1
U 1 1 5A5E5562
P 6450 2800
F 0 "R1" V 6530 2800 50  0000 C CNN
F 1 "R" V 6450 2800 50  0000 C CNN
F 2 "Resistors_SMD:R_0805" V 6380 2800 50  0001 C CNN
F 3 "" H 6450 2800 50  0001 C CNN
	1    6450 2800
	1    0    0    -1  
$EndComp
Wire Wire Line
	6450 2650 6900 2650
Text Label 6900 2650 0    60   ~ 0
DOUT
Wire Wire Line
	6450 3650 6450 3450
Wire Wire Line
	6450 2950 8250 2950
Wire Wire Line
	8250 2950 8250 3600
Connection ~ 8250 3600
$EndSCHEMATC
