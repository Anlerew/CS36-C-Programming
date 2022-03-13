#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

// 2 macros
#define SUM (a + b + c)
#define AVG SUM / (float)3

void main()
{
	int a, b, c;
	printf("Please enter 3 values ");
	scanf("%d%d%d", &a, &b, &c);
	printf("\n\nThe sum is %d\n", SUM);
	printf("The average is %0.3f\n\n", AVG);
	system("PAUSE");
}