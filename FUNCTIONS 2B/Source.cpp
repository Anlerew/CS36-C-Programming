#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// PROTOTYPE for when the main comes first
void load(int *, int *, int *);
void calc(int, int, int, int *, float *);
void print(int, float);

void main()
{
	int a, b, c, sum;
	float avg;

	load(&a, &b, &c);
	calc(a, b, c, &sum, &avg);
	print(sum, avg);
	system("PAUSE");
}

void load(int *red_one, int *red_two, int *red_three)
{
	printf("Enter three integer values ");
	scanf("%d%d%d", &(*red_one), &(*red_two), &(*red_three));
}

void calc(int num1, int num2, int num3, int *sum, float *avg)
{
	*sum = num1 + num2 + num3;
	*avg = *sum / (float)3;
}

void print(int suma, float avgb)
{
	printf("\n\nThe sum is %d\n", suma);
	printf("The average is %0.1f\n\n", avgb);
}

