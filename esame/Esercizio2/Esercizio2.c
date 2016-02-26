/*
### Esercizio 2 (25 punti)
Implementare una funzione, denominata zip, che dato due array di interi a e b della stessa lunghezza crei un terzo array che contenga i valori dei precedenti array intervallati tra di loro (partendo dal primo elemento dell’array a).
Esempio (in pseudocodice):
```sh
a = [1,7,9,4]
b = [4,5,6,9]
Risultato array:
risultato: [1,4,7,5,9,6,4,9]
```

Testare la funzione creando un array contenente i primi 100 numeri interi pari [0,2,4,6,8,...] e un array contenente i primi 100 numeri interi dispari [1,3,5,7,9,11,13,...].
Stampare a console l’array risultate dalla chiamata alla funzione zip.
*/


#include <stdio.h>
#include <stdlib.h>


// la dimensione di c[] deve essere il doppio i a e b
void zip(int* a, int* b, int* c, int length)
{
	for (int i = 0, j = 0, k = 0; i < length; ++i)
	{
		if (i % 2 == 0)
		{
			c[i] = a[j];
			++j;
		}
		else
		{
			c[i] = b[k];
			++k;
		}
	}
}


int main()
{
	int length_ab = 100;

	int a[length_ab];
	for (int i = 0; i < length_ab; ++i)
		a[i] = i * 2;

	int b[length_ab];
	int odd = 1;
	for (int i = 0; i < length_ab; ++i)
	{
		b[i] = odd;
		odd += 2;
	}

	int length_c = 2 * sizeof(a)/sizeof(int);
	int c[length_c];

	zip(a, b, c, length_c);
	for (int i = 0; i < length_c; ++i)
		printf("%d ", c[i]);
	printf("\n");

	return EXIT_SUCCESS;
}
