/*
 * Timer0_Configuration.h
 *
 *  Created on: Aug 17, 2022
 *      Author: Abdulrahman
 */

#ifndef MCAL_TIMER0_TIMER0_CONFIGURATION_H_
#define MCAL_TIMER0_TIMER0_CONFIGURATION_H_

/*
 * choose from :
 * TIMER0_PRESCALAR_1
 * TIMER0_PRESCALAR_8
 * TIMER0_PRESCALAR_64
 * TIMER0_PRESCALAR_256
 * TIMER0_PRESCALAR_1024
 * TIMER0_PRESCALAR_EXTCLK_FALLEDGE
 * TIMER0_PRESCALAR_EXTCLK_RISEEDGE
 */
#define TIMER_0_PRESCALER		TIMER0_PRESCALAR_1024

/*
 * choose from :
 * TIMER0_NORMAL_MODE
 * TIMER0_CTC_MODE
 * TIMER0_PHASECORRECT_MODE
 * TIMER0_FASTPWM_MODE
 */
#define TIMER_0_MODE			TIMER0_FASTPWM_MODE

/*
 * choose from:
 * Non PWM:
 * TIMER0_OC0_DISCONNECTED
 * TIMER0_OC0_TOG
 * TIMER0_OC0_CLR
 * TIMER0_OC0_SET
 * PWM:
 * TIMER0_OC0_PWM_NON_INVERTING
 * TIMER0_OC0_PWM_INVERTING
 */
#define TIMER_0_OC0_MODE		TIMER0_OC0_PWM_INVERTING

#define F_OSC					16	// MHZ

#endif /* MCAL_TIMER0_TIMER0_CONFIGURATION_H_ */
