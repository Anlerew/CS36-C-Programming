#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*
	for loops - deterministic or indeterminsitic
				entrance-controlled

				we will start with the deterministic for loops
	for(index variable = start value; condition; increment)

		the index vaiable controls the loop
*/
void main()
{
	int i;

	for (i = 1; i <= 8; i++)
		printf("%d   ", i);
	printf("\n\n");

	for (i = 5; i <= 22; i += 4)
		printf("%d   ", i);
	printf("\n\n");

	for (i = 25; i > 2; i -= 5)
		printf("%d   ", i);
	printf("\n\n");

	// This loop is skipped as the condition is initially false
	for (i = 1; i >= 5; i += 2)
		printf("%d   ", i);
	printf("\n\n");

	/*	infinite loop
	for (i = 5; i <= 22; i -= 4)
		printf("%d   ", i);
	printf("\n\n");
	*/

	// you can declare your index variable in the loop
	// you can use floats and doubles in for loops

	for (float f = 1.2; f <= 4.7; f += .4)
		printf("%0.2f   ", f);
	printf("\n\n");

	system("PAUSE");
	
}