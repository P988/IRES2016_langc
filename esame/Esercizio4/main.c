/*
### Esercizio 4 (2.5 punti)
Creare una struttura Studente caratterizzata da un cognome e dal voto.
Implementare le funzioni setCognome, getCognome, setVoto e getVoto che ne impostano e restituiscano rispettivamente il cognome e il numero di esami dello studente. Nota: non porrere limiti alla lunghezza del cognome.

Creare un array di 100000 Studenti così denominati:
```sh
Studente 1:
Cognome: “Cognome_1”
Voto: 1

Studente 2:
Cognome: “Cognome_2”
Voto: 2
…
Studente i:
Cognome: “Cognome_i”
Voto: i%10
..
Studente 100000:
Cognome: “Cognome_100000”
Voto: 0
```

Il voto è il numero dello studente modulo 10 (studente i-esimo ha voto i%10).

PS. la funzione sprintf(char* buf, “%d”, i) permette di trasformare un intero in una stringa (buf contiene la stringa rappresentante l’intero i.

Calcolare la somma dei voti degli studenti.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#include "Studente.h"


int main()
{
	int length = 100000;
	Studente* s = malloc(100000 * sizeof(Studente));

	for (int i = 0; i < length; ++i)
	{
		char cognome[15];
		char ordinale[7];
		strcpy(cognome, "Cognome_");
		sprintf(ordinale, "%d", i + 1);
		strcat(cognome, ordinale);

		Studente_setCognome(s + i, cognome);
		Studente_setVoto(s + i, (i + 1) % 10);
	}

	/*
	for (int i = 0; i < 100000; ++i)
	{
		char cognome[15];
		Studente_getCognome(s + i, cognome, 15);
		int voto = Studente_getVoto(s + i);
		printf("\nStudente %d:\nCognome: %s\nVoto: %d\n\n", i + 1, cognome, voto);
	}
	*/

	int somma = 0;
	for (int i = 0; i < 100000; ++i)
		somma += Studente_getVoto(s + i);

	printf("Somma dei voti: %d\n", somma);

	return EXIT_SUCCESS;
}