#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
	Pick a random number in a range
	eg dice 1 to 6
	   lotto 1 to 75
	   car washer in the second row 13 to 24

	use formula to picks a random number in a range
		num = rand() % (high - low +1) + low

*/
void main()
{
	int a, b, c;
	time_t t;
	srand((unsigned)time(&t));
	a = rand() % 6 + 1;// 1 to 6: 6 -1 + 1 = 6 and low is 1
	b = rand() % 75 +1;// 1 to 75: 75 - 1 + 1 = 75 and low is 1
	c = rand() % 12 + 13;// 13 to 24: 24 - 13 + 1 = 12 and low is 13
	printf("\n\n%d   %d   %d\n\n", a, b, c);
	system("PAUSE");
}