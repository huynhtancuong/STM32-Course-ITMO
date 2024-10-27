/*
 * payload_utils.cpp
 *
 *  Created on: Oct 16, 2024
 *      Author: huynh
 */

#include "led_utils.hpp"

void LED::turn_on() {
	HAL_GPIO_WritePin(this->GPIO_Type, this->GPIO_Pin, GPIO_PIN_SET);
	this->state = 1;
}


void LED::turn_off() {
	HAL_GPIO_WritePin(this->GPIO_Type, this->GPIO_Pin, GPIO_PIN_RESET);
	this->state = 0;
}


void LED::toogle() {
	HAL_GPIO_TogglePin(this->GPIO_Type, this->GPIO_Pin);
	this->state = !state;
}
