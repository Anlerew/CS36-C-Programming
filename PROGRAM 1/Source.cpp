/*
This program find the sum, difference, product,
quotient, modulus, and average of 2 integers

Written by: Andrew Nguyen
CS 36
7/3/2018
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void main()
{
	int num1, num2, sum, diff, pro, mod;
	float avg, quo;

	printf("Enter 2 integers ");
	scanf("%d%d", &num1, &num2);
	
	sum = num1 + num2;
	diff = num1 - num2;
	pro = num1 * num2;
	quo = num1 / (float)num2;
	mod = num1 % num2;
	avg = sum / (float)2;

	printf("The 2 numbers: %d %d\n\n", num1, num2);
	printf("The sum of the numbers: %d\n", sum);
	printf("The difference of the numbers: %d\n", diff);
	printf("The product of the numbers: %d\n", pro);
	printf("The quotient of the numbers: %f\n", quo);
	printf("The modulus of the numbers: %d\n", mod);
	printf("The average of the numbers: %f\n", avg);
	system("PAUSE");

}