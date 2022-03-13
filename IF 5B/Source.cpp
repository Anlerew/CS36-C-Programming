#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

/*
Input a value from 0 to 100
A 90 to 100
B 80 to 89
C 70 to 79
D 60 to 69
F 0 to 59
otherwise invalid
*/

void main()
{
	int score;
	printf("Enter a score from 0 to 100  ");
	scanf("%d", &score);

	if (score < 0 || score > 100)
		printf("\n\nInvalid Score\n\n");
	else
		if (score >= 90)
			printf("\n\nYour grade is A\n\n");
		else
			if (score >= 80)
				printf("\n\nYour grade is B\n\n");
			else
				if (score >= 70)
					printf("\n\nYour grade is C\n\n");
				else
					if (score >= 60)
						printf("\n\nYour grade is D\n\n");
					else
						printf("\n\nYour grade is F\n\n");
	system("PAUSE");
}

// BE CAREFUL WIH THE BORDER VALUES, eg 90, 70, etc.