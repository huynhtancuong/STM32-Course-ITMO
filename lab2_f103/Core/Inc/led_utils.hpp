/*
 * led_utils.cpp
 *
 *  Created on: Oct 17, 2024
 *      Author: huynh
 */

#ifndef INC_LED_UTILS_CPP_
#define INC_LED_UTILS_CPP_

#include "stm32f1xx_hal.h"
#include "etl/vector.h"
#include "etl/numeric.h"
#include "iterator"

class LED {
public:
	GPIO_TypeDef* GPIO_Type;
	uint16_t GPIO_Pin;
	bool state = 0;

	LED(GPIO_TypeDef* GPIO_Type, uint16_t GPIO_Pin, bool state = 0)
		: GPIO_Type{GPIO_Type}, GPIO_Pin{GPIO_Pin}, state{state} {}
	void turn_on();
	void turn_off();
	void toogle();
	bool get_state() { return state; }
};

template <size_t Size>
class LED_Vector {
public:
	etl::vector<LED*, Size> vec;

	bool get_state(uint8_t id) { return vec.at(id)->state; }
	void all_on() {
		auto it = vec.begin();
		while (it != vec.end()) {
			(*it)->turn_on();
			++it;
		}
	}
	void all_off() {
		auto it = vec.begin();
		while (it != vec.end()) {
			(*it)->turn_off();
			++it;
		}
	}
	void turn(const char *arg) {
		size_t i = 0;
		auto it = vec.begin();
		while (it != vec.end()) {
			if (arg[i] == '0') {
				(*it)->turn_off();
			} else if (arg[i] == '1') {
				(*it)->turn_on();
			}
			++it;
			i++;
		}
	}
};

#endif /* INC_LED_UTILS_CPP_ */
