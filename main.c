// coding: utf-8
#include <avr/io.h>
#include <avr/eeprom.h>

const uint8_t pwm[16] = { 0, 2, 3, 4, 6, 8, 11, 16, 23, 32, 45, 64, 90, 128, 181, 255 };
uint8_t pwmcounter, globpwm;
uint8_t globpwm_eeprom EEMEM = 0;


uint8_t eepromupdate(void){
	uint8_t tmp = eeprom_read_byte(&globpwm_eeprom);
	eeprom_write_byte(&globpwm_eeprom, ((tmp + 1) & 0x0f));
	return tmp;
}

void init(void){
	DDRB = 0xff;
	DDRD = (1<<PD6);
	PORTB = 0xff;
	PORTD &= ~(1<<PD6);
	globpwm = eepromupdate();
}

int main(void){
	init();

	while(1){
		if (pwmcounter == 0 && globpwm > 0){
			PORTB = 0xff;
		}
		
		pwmcounter++;
		
		for (int i=0; i<8; i++){
			if (pwmcounter >= pwm[globpwm]) PORTB &= ~(1<<i);
		}
	}
	return 0;
}

