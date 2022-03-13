/*
This program finds the sum and average
of three numbers

Written by Andrew Nguyen
CS 36 - June 21, 2018
*/

#define _CRT_SECURE_NO_WARNINGS    //MUST BE THE FIRST LINE

#include<stdio.h>
#include<stdlib.h>  // has the system pause

void main()
{
	int num1, num2, num3, sum;
	float avg;

	printf("Please enter three int values  ");
	scanf("%d%d%d", &num1, &num2, &num3);
	sum = num1 + num2 + num3;
	avg = sum / (float)3;  // casting  
	printf("\n\nThe 3 numbers are %d  %d  %d\n\n", num1, num2, num3);
	printf("The sum is %d\n", sum);
	printf("The average is %f\n\n", avg);
	system("PAUSE");
}

/*
simple data types - hold one value
eg int, long, float, double, char

a string is not a simple data type

for simple data types and scanf:
no spaces between the placeholders
must put &'s before the variable names

for strings - no &'s are used
*/