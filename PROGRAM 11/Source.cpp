#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>

int sumOfSquares(int n)
{
	if (n == 1)
		return 1;
	else
		return n*n + sumOfSquares(n - 1);
}

int main()
{
	int n;
	printf("Please enter the value of n: ");
	scanf("%d", &n);
	printf("The sum of squares of first %d numbers is: %d\n", n, sumOfSquares(n));
	system("pause");
}

/*
Please enter the value of n: 7
The sum of squares of first 7 numbers is: 140
Press any key to continue . . .
*/