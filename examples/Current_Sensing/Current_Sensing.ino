// Copyright (C) 2017 Luca Buccolini
/*
    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/

#include "Arduino.h"
#include "current_sensor.h"

//Create an instance of the current sensor
CURRENT_SENSOR my_CurrentSensor;

//The setup function
void setup()
{
// initialization code here
	// initialize serial port
	Serial.begin(9600);
	// initialize current sensor passing as parameter the type of the sensor
	my_CurrentSensor.begin(LEM_HAIS_50_P);
}

// loop function
void loop()
{
	// delay 
	delay(1000);
	// raw output of the sensor
	Serial.print("Hall_out: ");
	Serial.print( analogRead(A1) );
	// raw reference signal of the senor
	Serial.print("\tHall_ref: ");
	Serial.print( analogRead(A0) );
	// measured current with resolution of 0.39 A  (using LEM_HAIS_50_P)
	Serial.print("\nCurrent is: ");
	Serial.println( my_CurrentSensor.getCurrent() );
}
