#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*
	non void function - used to return EXACTLY ONE VALUE
	from a function

	eg write a non void function to return the average of
	three values

	use the return statement to return the one value in a function

	a void function means there is no return statement in the function

	There are two ways to call a non void function
		use an assignment statement or a print statement
*/

float findavg (int a, int b, int c)
{
	int sum = a + b + c;
	return sum / (float)3;
}

// prototype: float findavg (int, int, int);

void main()
{
	int x, y, z;
	float avg;
	printf("Enter three values ");
	scanf("%d%d%d", &x, &y, &z);

	// call with an assignment statement
	avg = findavg(x, y, z);
	printf("\n\nThe average is %0.3f\n\n", avg);

	// call with a print statement
	printf("\n\nThe average is %0.3f\n\n", findavg(x, y, z));
	
	system("PAUSE");
}