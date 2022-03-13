#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

int main() {

	int secretnum; 
	srand(time(NULL));
	secretnum = rand() % 50 + 1;
	int count = 0;

	int guess = 6;

	do
	{
		printf("Guess the number (1 to 50): ");
		int num;
		scanf("%d", &num);
		count++;
		if (num > secretnum)
			printf("Guess lower\n");
		else if (num < secretnum)
			printf("Guess higher\n");
		else if (num = secretnum)
			printf("Congratulations! Your guess was correct\n You took %d guesses\n", count), guess = 0;
		else
			printf("You were not able to guess the number with the given amount of guesses\n");

	} while (guess <= 6);
	system("PAUSE");
}

/*
Guess the number (1 to 50): 20
Guess lower
Guess the number (1 to 50): 10
Guess higher
Guess the number (1 to 50): 15
Guess higher
Guess the number (1 to 50): 17
Congratulations! Your guess was correct
You took 4 guesses
Press any key to continue . . .

Guess the number (1 to 50): 13
Guess lower
Guess the number (1 to 50): 1
Guess higher
Guess the number (1 to 50): 2
Guess higher
Guess the number (1 to 50): 6
Guess higher
Guess the number (1 to 50): 8
Guess higher
Guess the number (1 to 50): 11
You were not able to guess the number with the given amount of guesses
Press any key to continue . . .
*/