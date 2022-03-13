#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

/*
nested loops - loops within loops
you can nest any loop within any loop

eg for loop within a for loop
do loop within a while loop
while loop within a do loop within a while loop etc.
*/

void main()
{
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 4; j++)
			printf("%d  ", j);
		printf("\n");
	}
	system("PAUSE");
}

// always write and test the inner loop first before adding
// the outer loop!!!!!!!