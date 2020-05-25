/*
 * main.h
 *
 *  Created on: 24 мая 2020 г.
 *      Author: obozh
 */

#pragma once


enum class AxisId: uint8_t {
	x,
	y,
	z
};


void moveAxis(AxisId axis, bool start);
