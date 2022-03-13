#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*
	Same a s function 1A but the main will come first.

	If the main is to come first, you MUST prototype the functions
											(declare)
*/

// prototypes
void load();
void calc();
void print();

int a, b, c, sum;
float avg;

void main()
{
	load();
	calc();
	print();
	system("PAUSE");
}

void load()
{
	printf("Enter 3 values ");
	scanf("%d%d%d", &a, &b, &c);
}

void calc()
{
	sum = a + b + c;
	avg = sum / (float)3;
}

void print()
{
	printf("\n\nThe 3 values are %d  %d  %d\n", a, b, c);
	printf("The sum is %d\n", sum);
	printf("The average is %0.2f\n\n", avg);
}

/*
	FROM NOW ON, GLOBAL VARIABLES ARE STRICTLY NOT ALLOWED!!!!

	Why not?

	side effects - one programmer can easily mess up another
	programmer's section of the code

	The programmers all have to use the same variable names.

	There are no side effects with local variables

	Your main should only consist of declarations and function
	calls.
*/