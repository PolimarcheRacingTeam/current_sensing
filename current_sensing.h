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

#ifndef CURRENT_SENSOR_H_
#define CURRENT_SENSOR_H_

#include<stdint.h>

//#define CURRENT_SENSOR_DEBUG

// select the Current sensor to enable
#define USE_LEM_HAIS_50_P			// using LEM HAIS 50-P
#define USE_INA170_CSA				// using INA170 Current Sense Amplifier with 0.22ohm sense resistor and RL=RS=1kohm
#define USE_EXTERNAL_HALL_EFFECT	// using an external Hall effect sensor: to implement

// TYPES

// type of current sensors
typedef enum: uint8_t {
	LEM_HAIS_50_P,
	INA170_CSA,
	EXTERNAL_HALL_EFFECT
}currentsensorType_t;

// class CURRENT_SENSOR
class CURRENT_SENSOR{
	public:
		CURRENT_SENSOR();
		bool begin(currentsensorType_t currentsensorType_l);
		float getCurrent();
	private:
		float scale_factor;
};

#endif /* CURRENT_SENSOR_H_ */
