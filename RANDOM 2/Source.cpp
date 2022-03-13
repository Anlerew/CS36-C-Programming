#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
	Steps to pick different sequences of random numbers
		1. Include the header file time.h
		2. Declare a variable of type time_t
		3. Use srand statement to seed the random numbers
		ONLY SRAND once before your first rand() statement
*/
void main()
{
	int a, b, c;
	time_t t;
	srand((unsigned)time(&t));
	a = rand();
	b = rand();
	c = rand();
	printf("\n\n%d   %d   %d\n\n", a, b, c);
	system("PAUSE");
}