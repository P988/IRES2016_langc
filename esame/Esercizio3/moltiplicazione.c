#include "somma.h"


int moltiplicazione(int a, int b)
{
	int c = 0;

	for (int i = 0; i < a; ++i)
		c += b;

	return c;
}
