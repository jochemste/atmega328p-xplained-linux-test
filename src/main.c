#define F_CPU 16000000

#include <avr/io.h>
#include <util/delay.h>

#define DELAY 500

void ledb4_toggle();
void ledb5_toggle();

void ledb4_on();
void ledb5_on();

void ledb4_off();
void ledb5_off();

int main() {
  DDRB |= (1 << PB4);
  DDRB |= (1 << PB5);

  while (1) {
    ledb5_toggle();
    ledb4_toggle();
    _delay_ms(DELAY);
    ledb4_toggle();
    ledb5_toggle();
    _delay_ms(DELAY);
  }
}

void ledb4_toggle() { PORTB ^= (1 << PB4); }

void ledb5_toggle() { PORTB ^= (1 << PB5); }

void ledb4_on() { PORTB |= (1 << PB4); }

void ledb5_on() { PORTB |= (1 << PB5); }

void ledb4_off() { PORTB &= ~(1 << PB4); }

void ledb5_off() { PORTB &= ~(1 << PB5); }
