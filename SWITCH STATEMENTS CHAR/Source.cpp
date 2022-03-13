#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*
	input a letter grade and print the appropriate message
		A	Excellent
		B	Good
		C	Average
		D	Fair
		F	Miserable Failure
		otherwise Invalid

		Make sure A and a are Excellent
		string data goes in " " double quotes
		char data goes in ' ' single quotes
*/

void main()
{
	char grade;
	printf("Enter a letter grade ");
	scanf("%c", &grade);
	switch (grade)
	{
	case 'A': case 'a': printf("\nExcellent\n");
						break;
	case 'B': case 'b': printf("\nGood\n");
						break;
	case 'C': case 'c': printf("\nAverage\n");
						break;
	case 'D': case 'd': printf("\nFair\n");
						break;
	case 'F': case 'f': printf("\nMiserable Failure\n");
						break;
	default: printf("\nInvalid\n");
	}
	system("PAUSE");
}