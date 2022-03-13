#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

/*
	How to Handle More Than 2 conditions or possibilities
	eg three conditions or possibilities
		first number bigger
		first number smaller
		two numbers are equal
	Use stand alone is or use nested ifs
								("wihin")

*/
void main()
{
	int a, b;
	printf("Please enter 2 values ");
	scanf("%d%d", &a, &b);

	// use stand alone ifs
	if (a > b)
		printf("\n\nFirst value is bigger\n\n");
	if (a < b)
		printf("\n\nFirst value is smaller\n\n");
	if (a == b)
		printf("\n\nThe values are equal\n\n");
	system("PAUSE");
}

//MAKE SURE TO TEST ALL CONDITIONS!!!!!!!!!!!