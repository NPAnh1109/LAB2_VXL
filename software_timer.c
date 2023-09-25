/*
 * software_timer.c
 *
 *  Created on: Sep 18, 2023
 *      Author: 84977
 */

#include "software_timer.h"

int timer0_counter = 0, timer1_counter = 0;
int timer0_flag, timer1_flag = 0;

void setTimer0(int duration) {
	timer0_counter = duration;
	timer0_flag = 0;
}

void setTimer1(int duration) {
	timer1_counter = duration;
	timer1_flag = 0;
}

void timerRun() {
	timer0_counter--;
	if (timer0_counter <= 0) timer0_flag = 1;
	timer1_counter--;
	if (timer1_counter <= 0) timer1_flag = 1;
}
