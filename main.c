// coding: utf-8
#include <avr/io.h>
#include <avr/interrupt.h>

const uint8_t pwm[16] = { 0, 2, 3, 4, 6, 8, 11, 16, 23, 32, 45, 64, 90, 128, 181, 255 };
volatile uint8_t pwmmode[8] = { 0, 2, 4, 6, 8, 11, 14, 16 };
volatile uint8_t pwmcounter;

ISR(TIMER0_OVF_vect){
	pwmcounter++;

	if (pwmcounter == 0){
		PORTB = 0xff;
		pwmmode[0] = (pwmmode[0] + 1) & 0x1111;
	}

	if (pwmcounter > pwm[pwmmode[0]]) PORTB &= ~(1<<PB0);
	if (pwmcounter > pwm[pwmmode[1]]) PORTB &= ~(1<<PB1);
	if (pwmcounter > pwm[pwmmode[2]]) PORTB &= ~(1<<PB2);
	if (pwmcounter > pwm[pwmmode[3]]) PORTB &= ~(1<<PB3);
	if (pwmcounter > pwm[pwmmode[4]]) PORTB &= ~(1<<PB4);
	if (pwmcounter > pwm[pwmmode[5]]) PORTB &= ~(1<<PB5);
	if (pwmcounter > pwm[pwmmode[6]]) PORTB &= ~(1<<PB6);
	if (pwmcounter > pwm[pwmmode[7]]) PORTB &= ~(1<<PB7);
}
	

void init(void){
	TCCR0B |= (1<<CS00);
	TIMSK  |= (1<<TOIE0);
	DDRB = 0xff;
	DDRD = (1<<PD6);
	PORTB = 0xff;
	PORTD &= ~(1<<PD6);
	sei();
}

int main(void){
	init();

	while(1){
	}
	return 0;
}

