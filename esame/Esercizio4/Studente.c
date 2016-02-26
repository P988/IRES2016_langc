#include <stdlib.h>
#include <string.h>


#include "Studente.h"


void Studente_setCognome(Studente* this, char* cognome)
{
	int length = strlen(cognome);
	this->cognome = malloc(length + 1);
	strcpy(this->cognome, cognome);
}


void Studente_getCognome(Studente* this, char* cognome, int length)
{
	strncpy(cognome, this->cognome, length);
	cognome[length - 1] = '\0';
}


void Studente_setVoto(Studente* this, int voto)
{
	this->voto = voto;
}


int Studente_getVoto(Studente* this)
{
	return this->voto;
}
