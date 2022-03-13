#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*
	Random Numbers - games statistical applications

	rand() picks a random number from 0 to 32767
	rand() is in stdlib.h
*/
void main()
{
	int a, b, c;
	a = rand();
	b = rand();
	c = rand();
	printf("\n\n%d   %d   %d\n\n", a, b, c);
	system("PAUSE");
}

// PROBLEM - The smae 3 numbers are picked everytime