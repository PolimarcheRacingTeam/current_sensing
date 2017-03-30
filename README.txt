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

This is a library for the current sensor used in sBMS v1.0 for Peacock FSAE car of Polimarche Racing Team
Available in: https://github.com/PolimarcheRacingTeam/current_sensing

Designed specifically to work with the sBMS v1.0 Breakout board

These library provide methods to use the current sensors available on the sBMS v1.0 Breakout board
All the sensors uses two analog reading:
-pin A0 => current sensor reference signal 
-pin A1 => current sensor output signal 

The current sensors available on the board are: 
-LEM HAIS 50-P (range -150 A / +150 A, resolution 0.39 A). This is working now.
-Current Sensor Amplifier Texas Instruments INA170 (range -11.36 A / +11.36 A, resolution 22.19 mA). Not yet implemented.
-External connector (to define external sensors). Not yet implemented.

Polimarche Racing Team invests time and resources providing this open source code, 
please support Polimarche Racing Team and open-source hardware.

Written by Luca Buccolini, member of Polimarche Racing Team, FSAE team of Università Politecnica delle Marche
http://www.polimarcheracingteam.com
GPL v2 license, all text above must be included in any redistribution

To download. click the DOWNLOAD ZIP button, rename the uncompressed folder current_sensing. 
Check that the current_sensing folder contains current_sensing.cpp and current_sensing.h

To install the library, follow the instruction on: 
https://www.arduino.cc/en/Guide/Libraries#toc4 or
https://www.arduino.cc/en/Guide/Libraries#toc5

