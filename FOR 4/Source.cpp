#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

// find the largest of 5 values

void main()
{
	int num, big, i;
	printf("Enter a value  ");
	scanf("%d", &big);
	for (i = 2; i <= 5; i++) // or use 1 and 4
	{
		printf("Enter a value  ");
		scanf("%d", &num);
		if (num > big)
			big = num;
	}
	printf("\n\nThe largest value is %d\n\n", big);
	system("PAUSE");
}