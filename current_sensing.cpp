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

#include "current_sensor.h"
#include <Arduino.h>

#define HALL_SENSOR_OUT_PIN	A1
#define HALL_SENSOR_REF_PIN A0

#define Vresolution_mV	0.00489

//	define Current Transducer details

//	model: LEM HAIS 50-P
// 	datasheet: http://www.lem.com/docs/products/hais_50_400-p_and_50_150-tp.pdf
#define I_PN 	50.0	// primary nominal current RMS
#define I_MAX 	150.0	// not used
#define G_TH	0.625	// theoretical sensitivity


bool CURRENT_SENSOR::begin(currentsensorType_t currentsensorType_l){
		if(currentsensorType_l == LEM_HAIS_50_P){
			scale_factor = Vresolution_mV * I_PN / G_TH;
		}
		else if(currentsensorType_l == INA170_CSA){

		}
		else if(currentsensorType_l == EXTERNAL_HALL_EFFECT){

		}
		else
			return false;
}

CURRENT_SENSOR::CURRENT_SENSOR(){
}

float CURRENT_SENSOR::getCurrent(){
	uint16_t hall_sensor_out;
	uint16_t hall_sensor_ref;
	hall_sensor_out = analogRead(HALL_SENSOR_OUT_PIN);
	hall_sensor_ref = analogRead(HALL_SENSOR_REF_PIN);
	return (((float)hall_sensor_out - (float)hall_sensor_ref) * scale_factor);
}
