#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

long fact(int n)
{
	if (n == 0)
		return 1;
	return n * fact(n - 1);
}

void main()
{
	int num;
	printf("What factorial would you like to find? ");
	scanf("%d", &num);
	printf("\n\nThe factorial of %d is %d\n\n", num, fact(num));
	system("PAUSE");
}