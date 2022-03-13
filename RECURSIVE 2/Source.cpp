#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

long powertwo(int n)
{
	if (n == 0)
		return 1;
	return 2 * powertwo(n - 1);
}

void main()
{
	int num;
	printf("What power of two would you like to find? ");
	scanf("%d", &num);
	printf("\n\nTwo to the power of %d is %d\n\n", num, powertwo(num));
	system("PAUSE");
}