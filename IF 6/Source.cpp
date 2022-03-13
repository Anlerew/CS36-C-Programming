#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


/*
	One Line If Statement / Ternary If Statement

	can only be used when there is exactly one true statement 
	and exactly one false statement

		if(a > b)
			printf("First value is bigger\n");
		else
			printf("First value is no bigger\n");
*/

void main()
{
	int a, b;
	printf("Enter two values ");
	scanf("%d%d", &a, &b);
	a > b ? printf("First value is bigger\n")
		: printf("First value is not bigger\n");
	system("PAUSE");
}

// condition ? true statement : false statement;