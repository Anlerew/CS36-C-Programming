#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void main()
{
	int a[5], i;

	// load the array from the keyboard
	for (i = 0; i < 5; i++)
	{
		printf("Enter a value ");
		scanf("%d", &a[i]);
	}

	// print the array
	printf("\n\n");
	for (i = 0; i < 5; i++)
		printf("%d   ", a[i]);
	printf("\n\n");

	// find and print the sum and average
	int sum = 0;
	for (i = 0; i < 5; i++)
		sum += a[i];
	float avg = sum / (float)5;
	printf("The sum is %d\n", sum);
	printf("The avaerage is %0.3f\n\n", avg);

	// find and print the largest value of the array
	int big = a[0];
	for (i = 1; i < 5; i++)
		if (a[i] > big)
			big = a[i];
	printf("The largest value is %d\n\n", big);

	system("PAUSE");
}