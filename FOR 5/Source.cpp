#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

/*
Sum and Average values until -999 is entered
using a indeterministic for loop

all 3 parts of a for loop are actually optional
*/

void main()
{
	int num, sum = 0, count = 0;
	//MUST SET YOUR SUMS AND COUNTERS TO 0 INITIALLY!!!!!!
	float avg;
	printf("Enter a value, -999 to quit  ");
	scanf("%d", &num);
	for (; num != -999; count++)
	{
		sum += num;
		printf("Enter a value, -999 to quit  ");
		scanf("%d", &num);
	}
	if (count)
	{
		avg = sum / (float)count;
		printf("\n\nThe sum is %d\n", sum);
		printf("The average is %0.3f\n\n", avg);
	}
	else
		printf("\n\nNo Data Was Entered\n\n");
	system("PAUSE");
}

/*
if(count) is only needed for indeterministic,
entrance-controlled loops

if(count) is exactly the same as if(count != 0)
a value of 0 is considered false
any other value is considered true
*/