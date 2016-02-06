#include <stdio.h>

void main()
{
	int array[20];
	int val = 20;

	for (int i = 0; i < 20; i++)
	{
		array[i] = val;
		printf("%d ", array[i]);
		val--;
	}
	printf("\n");
}

