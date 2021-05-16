#ifndef ARRAYS_H_
#define ARRAYS_H_

#include <stdint.h>

/**
 * Funkcija element izracunava vrednost n-tog clana geometrijskog niza opisanog pomocu
 * pocetne vrednosti niza i odnosa susednih elemenata
 * @param first_element - tipa int16_t, prvi element
 * @param ratio - tipa int16_t, odnos
 * @param n - broj elemenata za koje je potrebno izvrsiti proracune
 * @return vrednost n-tog clana geometrijskog niza
 */
int16_t Element(int16_t first_element, int16_t ratio, int16_t n);

/**
 * Funkcija Sum izračunava sumu prvih n članova geometrijskog niza
* opisanog pomoću početne vrednosti niza i odnosa, na osnovu parametra mode.
* Ukoliko mode ima vrednost ITERATIVE, vrednost sume je potrebno odrediti
* iteratitvno (sumom svih elemenata do n-tog), dok u slučaju vrednosti
* FORMULA, potrebno je odrediti sumu po odgovarajućoj formuli. ITERATIVE
* i FORMULA su vrednosti definisane pomoću makro konstante
* @param first_element - tipa int16_t, prvi element
* @param ratio - tipa int16_t, odnos
* @param n - broj elemenata za koje je potrebno izvrsiti proracune
* @param mode - mod, da li je ITERATIVE ili FORMULA
* @return vrednost sume prvih n clanova geometrijskog niza
 */

void Sum(int16_t first_element, int16_t ratio, int16_t n, int8_t mode);



#endif /* ARRAYS_H_ */
