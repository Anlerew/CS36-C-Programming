#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

// find the sum and average of 5 numbers

void main()
{
	int num, sum = 0, i;    // no count is needed
	float avg;

	for (i = 1; i <= 5; i++)
	{
		printf("Enter a value   ");
		scanf("%d", &num);
		sum += num;
	}
	avg = sum / (float)5;
	printf("\n\nThe sum is %d\n", sum);
	printf("The average is %0.3f\n\n", avg);
	system("PAUSE");
}