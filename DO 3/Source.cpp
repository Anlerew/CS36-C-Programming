#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
/*
FIND THE LARGET VALUE UNTIL -999 IS ENTERED
first formulate algorithm - step by step technique
to solve a problem

basic idea: set the first value to the largest
for each number read, compare o the largest and replace
the largest if necessary
*/
void main()
{
	int num, large;
	printf("Enter a value, but not -999 ");
	scanf("%d", &large);
	printf("Enter a value, but not -999 ");
	scanf("%d", &num);
	do
	{
		if (num > large)
			large = num;
		printf("Enter a value, -999 to quit ");
		scanf("%d", &num);
	} while (num != -999);
	printf("\n\nThe largest value was %d\n\n", large);
	system("PAUSE");
}
