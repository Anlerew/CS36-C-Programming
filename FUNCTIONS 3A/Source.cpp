#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

// swap function with value parameters
//WRONG WRONG WRONG WRONG

void swap(int a, int b)
{
	int t = a;
	a = b;
	b = t;
}

void main()
{
	int x, y;
	printf("Enter two values ");
	scanf("%d%d", &x, &y);
	printf("\n\nBefore the swap:  %d  %d\n\n", x, y);
	swap(x, y);
	printf("\n\nAfter the swap:  %d  %d\n\n", x, y);
	system("PAUSE");
}