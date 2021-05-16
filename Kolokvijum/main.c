/**
 * @main.c
 * @version 1.0
 * @brief Kolokvijum
 * @author Ljubica Poterbic
 * @date 16.5.2021.
 */

#include <util/delay.h>
#include <stdint.h>
#include <stdlib.h>
#include "../usart/usart.h"
#include "../pin_driver/pin.h"

/// Makro za mod racunanja: sabiranje elemenata jedan po jedan
#define ITERATIVE 1

/// Makro za mod racunanja: vrednost sume se racuna po odgovarajucoj formuli
#define FORMULA 0

int main()
{
	int16_t first_element[64];
	uint8_t duzina;
	int16_t ratio;
	int16_t n[20]; /// Broj elemenata za koje je potrebno izvrsiti proracune
	usartInit(9600);

	while(1)
	{
		usartPutString("Unesite prvi element: ");
		while(!usartAvailable())
			;
		_delay_ms(100);

		duzina = usartGetString(first_element);
		usartPutString(first_element);
		usartPutString("\r\n");

		first_element[duzina] = '\0';

		usartPutString("Unesite broj clanova niza za koje je potrebno izvrsiti proracune: ");
		while(!usartAvailable())
			;
		_delay_ms(100);

		duzina = usartGetString(n);
		usartPutString(n);
		usartPutString("\r\n");

		n [duzina] = '\0';



	}
	return 0;
}
