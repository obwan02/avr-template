#include <avr/io.h>

int main() {
	DDRB = 0xFF; // All of port B is set to output
	
	while(1) {
		PORTB = 0x3D;	
	}

	return 0;
}
