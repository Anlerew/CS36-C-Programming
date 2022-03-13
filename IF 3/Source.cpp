#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

/*
	You are allowed to have multiple statements for both 
	the true part and the false part. If there are multiple statements
	you must put them in {}
*/
void main()
{
	int a, b;
	printf("Please enter 2 values ");
	scanf("%d%d", &a, &b);
	if (a > b)
	{
		printf("\n\nFirst value is bigger\n\n");
		printf("Hi Mom\n\n");
	}
	else
		printf("\n\nFirst value is not bigger\n\n");
	system("PAUSE");
}

//MAKE SURE TO TEST ALL CONDITIONS!!!!!!!!!!!