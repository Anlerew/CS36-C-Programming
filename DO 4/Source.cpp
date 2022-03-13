#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*
	do loops are used to bounds-check user data
		eg ask the user for a value from 1 o 10
		kep askin the user to enter a value until the user
		enters a valid value from 1 o 10
*/
void main()
{
	int num;
	do
	{
		printf("Enter a value from 1 to 10 ");
		scanf("%d", &num);
		if (num < 1 || num > 10)
			printf("You are a real genius, do it right next time\n");
	} while (num < 1 || num > 10);
	printf("\n\nThe value entered was %d\n\n", num);
	system("PAUSE");
}