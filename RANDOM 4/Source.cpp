#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
	The beginning of a craps game
	roll 2 dice
		if the sum is 7 or 11 you win
		if the sum is 2, 3, or 12 you lose
		otherwise a boring tie
*/
void main()
{
	int d1, d2, sum;
	time_t t;
	srand((unsigned)time(&t));
	d1 = rand() % 6 + 1;// 1 to 6: 6 -1 + 1 = 6 and low is 1
	d2 = rand() % 6 + 1;// 1 to 6: 6 -1 + 1 = 6 and low is 1
	sum = d1 + d2;
	printf("\n\n%d   %d   %d\n\n", d1, d2, sum);
	if (sum == 7 || sum == 11)
		printf("\n\nYOU WON! Congratulations!\n\n");
	else
		if (sum == 2 || sum == 3 || sum == 12)
			printf("\n\nBIG LOSER LOSER!\n\n");
		else
			printf("\n\nBORING TIE!\n\n");

	system("PAUSE");
}