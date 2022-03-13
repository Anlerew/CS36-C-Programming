#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

/*
	two dimensional array uses 2 subscripts
	the first is for the row
	the second is for the column
*/

void main()
{
	int a[3][4], row, col;

	// load the array from the keyboard
	for(row = 0; row < 3; row++)
		for (col = 0; col < 4; col++)
		{
			printf("Enter a value ");
			scanf("%d", &a[row][col]);
		}

	// print the array
	printf("\n\n");
	for (row = 0; row < 3; row++)
	{
		for (col = 0; col < 4; col++)
			printf("%7d ", a[row][col]);
		printf("\n");
	}
	printf("\n\n");

	// calc th sum and average
	int sum = 0;
	for (row = 0; row < 3; row++)
		for (col = 0; col < 4; col++)
			sum += a[row][col];
	printf("The sum is %d\n", sum);
	float avg = sum / (float)12;
	printf("The average is %0.3f\n\n", avg);

	system("PAUSE");
}