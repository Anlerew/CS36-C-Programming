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
	char name[20];
	int num1, num2, num3, sum;
	float avg;

	// student 1
	printf("What is the name?  ");
	gets_s(name);  // no &'s for strings
	printf("Please enter three test values  ");
	scanf("%d%d%d", &num1, &num2, &num3);
	sum = num1 + num2 + num3;
	avg = sum / (float)3;  // casting  
	printf("\n\n%s average was %f\n\n", name, avg);

	// student 2
	getchar();   // fflush(stdin);
	printf("What is the name?  ");
	gets_s(name);  // no &'s for strings
	printf("Please enter three test values  ");
	scanf("%d%d%d", &num1, &num2, &num3);
	sum = num1 + num2 + num3;
	avg = sum / (float)3;  // casting  
	printf("\n\n%s average was %f\n\n", name, avg);

	// student 3
	getchar();   // fflush(stdin);
	printf("What is the name?  ");
	gets_s(name);  // no &'s for strings
	printf("Please enter three test values  ");
	scanf("%d%d%d", &num1, &num2, &num3);
	sum = num1 + num2 + num3;
	avg = sum / (float)3;  // casting  
	printf("\n\n%s average was %f\n\n", name, avg);

	system("PAUSE");
}

/*
When must getchar() or fflush be used?

When the enter key must be removed from the input buffer
OR
When you are not able to type in the next string
OR
Whenever entering a string or a char after entering in
numeric data
*/
