/*
### Esercizio 1 (25 punti)
Creare una funzione che accetti in input un array di interi e restituisca la media in double degli elementi contenuti.
Stampare a console la media di un array che contenga i primi 100 numeri interi divisibili per 3. (ovveri: 3, 6, 9, …).
*/

#include <stdio.h>
#include <stdlib.h>


double average(int* a, int length)
{
	double sum = 0;

	for (int i = 0; i < length; ++i)
		sum += a[i];

	return sum/length;
}


int main()
{
	int length = 100;
	int a[length];

	for (int i = 0; i < length; ++i)
		a[i] = (i + 1) * 3;

	double result = average(a, length);
	printf("Average = %f\n", result);

	return EXIT_SUCCESS;
}
