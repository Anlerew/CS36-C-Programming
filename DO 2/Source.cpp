#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*
Sum and Average values until -999 is entered
*/

void main()
{
	int num, sum = 0, count = 0;
	// MUST SET SUMS AND COUNTERS TO 0 INITIALLY!!!!
	float avg;
	printf("Enter a value, but not -999 ");
	scanf("%d", &num);
	do
	{
		sum += num;
		count++;
		printf("Enter a value, -999 to quit ");
		scanf("%d", &num);
	} while (num != -999);
		avg = sum / (float)count;
		printf("\n\nThe sum is %d\n\n", sum);
		printf("\n\nThe average is %0.3f\n\n", avg);
	system("PAUSE");
}

/*
if(count) is onl needed for indeterministic,
entrance-controlled loops

if(count) is exactly the same as if(count!=0)
a value of 0 is considered false
any other value is considered true
*/