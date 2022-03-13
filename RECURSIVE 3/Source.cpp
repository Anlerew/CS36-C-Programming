#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

long fib(int n)
{
	if (n == 1 || n == 2)
		return 1;
	return fib(n - 1) + fib(n - 2);
}

void main()
{
	int num;
	printf("What Fibonacci number would you like to find? ");
	scanf("%d", &num);
	printf("\n\nThe Fibonacci number of %d is %d\n\n", num, fib(num));
	system("PAUSE");
}