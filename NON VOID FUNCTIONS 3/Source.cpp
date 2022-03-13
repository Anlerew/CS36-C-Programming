#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*
	Write a function to return the letter grade for a test score
	90 to 100 A
	80 to 89 B
	70 to 79 C
	60 to 69 D
	0 to 59 F
*/

char findgrade(int s)
{
	if (s >= 90)
		return 'A';
	if (s >= 80)
		return 'B';
	if (s >= 70)
		return 'C';
	if (s >= 60)
		return 'D';
	return 'F';
}

void main()
{
	int s;
	printf("Enter a test score ");
	scanf("%d", &s);
	if (s >= 0 && s <= 100)
		printf("\n\nYour grade is %c\n\n", findgrade(s));
	else
		printf("\n\nInvalid score\n\n");
	system("PAUSE");
}