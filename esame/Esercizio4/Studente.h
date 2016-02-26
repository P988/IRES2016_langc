#ifndef STUDENTE_H
#define STUDENTE_H


typedef struct {
	char* cognome;
	int voto;
} Studente;


void Studente_setCognome(Studente* this, char* cognome);

void Studente_getCognome(Studente* this, char* cognome, int length);

void Studente_setVoto(Studente* this, int voto);

int Studente_getVoto(Studente* this);


#endif