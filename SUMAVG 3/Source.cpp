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
string - collection/array of chars

string is not a simple data type

to declare a string:  char name[20];

allows a string up to 19 chars + NULL character
NULL character marks the end of the string

You should always use gets_s to input strings
scanf only reads to the whitespace
gets_s reads strings with whitespace
gets_s reads to the enter key
*/