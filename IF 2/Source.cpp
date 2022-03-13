#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

/*
if statement - test for conditions / Booleans
						(true or false)
if(condition)
	statement1;
else
	statement2;

if the condition is true, do statement1
if the condition is false, do statement2
*/
void main()
{
	int a, b;
	printf("Please enter 2 values ");
	scanf("%d%d", &a, &b);
	if (a > b)
		printf("\n\nFirst value is bigger\n\n");
	else
		printf("\n\nFirst value is not bigger\n\n");
	system("PAUSE");
}

//MAKE SURE TO TEST ALL CONDITIONS!!!!!!!!!!!