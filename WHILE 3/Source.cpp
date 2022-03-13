#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
/*
	FIND THE LARGEST AND SMALLEST VALUE UNTIL -999 IS ENTERED
	first formulate algorithm - step by step technique
		to solve a problem

	basic idea: set the first value to the largest
	for each number read, compare o the largest and replace
	the largest if necessary
*/
void main()
{
	int num, small, large;
	printf("Enter a value, but not -999 ");
	scanf("%d", &small, &large);
	printf("Enter a value, -999 to quit ");
	scanf("%d", &num);
	while (num != -999)
	{
		if (num > large)
			large = num;
		if (num < small)
			small = num;
		printf("Enter a value, -999 to quit ");
		scanf("%d", &num);
	}
	printf("\n\nThe largest value was %d\n\n", large);
	printf("\n\nThe smallest value was %d\n\n", small);
	system("PAUSE");
}
/*
	For Exam 3, the last question will be:
		rewrite this program to find the largest and smallest values in one loop only
this part only:
	printf("Enter a value, but not -999 ");
	scanf("%d", &large);
	printf("Enter a value, -999 to quit ");
	scanf("%d", &num);
	while (num != -999)
	{
		if (num > large)
			large = num;
		printf("Enter a value, -999 to quit ");
		scanf("%d", &num);
	}
	printf("\n\nThe largest value was %d\n\n", large);
*/