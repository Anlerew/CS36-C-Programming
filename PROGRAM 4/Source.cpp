/*
This program will be a slot machine game.

Written by: Andrew Nguyen
CS 36
7/3/2018
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int betAmount, window1, window2, window3, match2, match3;
	char cherry, apple, lemon, orange;
	cherry = 1;
	apple = 2;
	lemon = 3;
	orange = 4;
	printf("Enter Bet Amount $");
	scanf("%d", &betAmount);
	time_t t;
	srand((unsigned)time(&t));
	window1 = rand() % 4 + 1;
	window2 = rand() % 4 + 1;
	window3 = rand() % 4 + 1;
	match3 = betAmount * 8;
	match2 = betAmount * 3;

	{
		if (window1 == 1)
			window1 = (char)(cherry);
		else if (window1 == 2)
			window1 = (char)(apple);
		else if (window1 == 3)
			window1 = (char)(lemon);
		else
			window1 = (char)(orange);
	}

	{
		if (window2 == 1)
			window2 = (char)(cherry);
		else if (window2 == 2)
			window2 = (char)(apple);
		else if (window2 == 3)
			window2 = (char)(lemon);
		else
			window2 = (char)(orange);
	}

	{
		if (window3 == 1)
			window3 = (char)(cherry);
		else if (window3 == 2)
			window3 = (char)(apple);
		else if (window3 == 3)
			window3 = (char)(lemon);
		else
			window3 = (char)(orange);
	}

	printf("\n\n%c   %c   %c\n\n", (char)window1, (char)window2, (char)window3);

	if (window1 == window2 && window2 == window3)
		printf("\nCongratulations you have won $%d!\n", match3);
	else if (window1 == 1 && window2 == 1)
		printf("\nCongratulations you have won $%d!\n", match2);
	else if (window1 == 1 && window2 != 1)
		printf("\nYou keep $%d\n", betAmount);
	else
		printf("\nYou lose $%d\n", betAmount);


	system("PAUSE");
}

/*
Enter Bet Amount $32


orange   cherry   apple


You lose $32
Press any key to continue . . .

Enter Bet Amount $32


cherry   orange   cherry


You keep $32
Press any key to continue . . .

Enter Bet Amount $32


cherry   cherry   cherry


Congratulations you have won $256!
Press any key to continue . . .
*/