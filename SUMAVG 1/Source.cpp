/*
This program finds the sum and average
of three numbers

Written by Andrew Nguyen
CS 36 - June 21, 2018
*/

#include<stdio.h>
#include<stdlib.h>  // has the system pause

void main()
{
	int num1, num2, num3, sum;
	float avg;

	num1 = 1;
	num2 = 2;
	num3 = 4;
	sum = num1 + num2 + num3;
	avg = sum / (float)3;  // casting  
	printf("The 3 numbers are %d  %d  %d\n\n", num1, num2, num3);
	printf("The sum is %d\n", sum);
	printf("The average is %f\n\n", avg);
	system("PAUSE");
}

/*
The 3 numbers are 10  20  30

The sum is 60
The average is 20.000000

Press any key to continue . . .
*/

/*
You must cast when the data types are different on the two sides
of the assignment statement.

avg = sum / (float) 3;   right side is int
left side is float
*/