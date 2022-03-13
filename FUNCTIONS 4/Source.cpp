#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

/*
	How to pass strings as parameters

	strings/arrays are passed by reference only

	in the function - only put the * in the parameter list
	NO &'s in the cell
*/

void load(char *f, char *l)
{
	printf("Enter a first name ");
	gets_s(f, 15);
	printf("Enter a last name df");
	gets_s(l, 20);
}	// Stupid Studio - gets_s requires length outside of main

void main()
{
	char first[15], last[20];
	load(first, last);
	printf("\n\n%s %s\n\n", first, last);
	system("PAUSE");
}