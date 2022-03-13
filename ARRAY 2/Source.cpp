#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
// arrays and strings are passed by reference only

void load(int a[], int n)
{
	// load the array from the keyboard
	for (int i = 0; i < n; i++)
	{
		printf("Enter a value ");
		scanf("%d", &a[i]);
	}
}

// prototype: void load(int [], int);

void print(int a[], int n)
{
	// print the array
	printf("\n\n");
	for (int i = 0; n < 5; i++)
		printf("%d   ", a[i]);
	printf("\n\n");
}

void calc(int a[], int n)
{
	// find and print the sum and average
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += a[i];
	float avg = sum / (float)n;
	printf("The sum is %d\n", sum);
	printf("The avaerage is %0.3f\n\n", avg);
}

void biggest(int a[], int n)
{

	// find and print the largest value of the array
	int big = a[0];
	for (int i = 1; i < n; i++)
		if (a[i] > big)
			big = a[i];
	printf("The largest value is %d\n\n", big);

}

void sort(int a[], int n)
{
	// sort in ascending order - low to high
	// > ascending order  < descnding order
	int i, j, t;
	for(i = 0; i < n-1; i++)
		for (j = 0; j < n-1; j++)
			if (a[j] > a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
}

void main()
{
	int a[SIZE];
	load(a, SIZE);
	print(a, SIZE);
	calc(a, SIZE);
	biggest(a, SIZE);
	sort(a, SIZE);
	print(a, SIZE);
	system("PAUSE");
}

/*
	Sorting - put in oder

	ascending order - low to high
	OR
	descending order - high to low

	technique is called bubblesort - good as the function is short
	but bad as the bubblesort is SLOW!
*/