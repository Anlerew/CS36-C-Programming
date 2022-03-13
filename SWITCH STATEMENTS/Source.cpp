#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*
	switch statement - another way to test for multiple
					   conditions

					   (nested ifs are better)

					   only work for ints, longs, and chars
					  
					   only test for one value at a time (BOO!)
					   
					   are used for menu handling programs later

	input a value from 1 to 10
		1, 2, 3 Low
		4, 5, 6, 7 Medium
		8, 9, 10 High
		otherwise Invalid
*/

void main()
{
	int num;
	printf("Enter a value from 1 to 10 ");
	scanf("%d", &num);
	switch (num)
	{
		case 1:
		case 2:
		case 3: printf("\nLow\n");
				break;
		case 4: case 5: case 6: case 7: printf("\nMedium\n");
										break;
		case 8: case 9: case 10: printf("\nHigh\n");
								 break;
		default: printf("\nInvalid\n");
		// default case is done when there is no matching
		// case label
	}
	system("PAUSE");
}