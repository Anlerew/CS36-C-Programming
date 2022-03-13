#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>  // for the sqrt function
#include<time.h>

// for loops can be used to find sums  eg sum 1 to 50

void main()
{
	int i, sum = 0;
	for (i = 1; i <= 50; i++)
		sum += i;
	printf("\n\nThe sum is %d\n\n", sum);

	// for loops can be used to generate tables of data
	// eg list the square roots of the numbers from 12.2 to 18.2
	// in steps of .2

	for (float f = 12.2; f < 18.21; f += .2)
		printf("%10.1f %12.4f\n", f, sqrt(f));
	printf("\n\n");

	// flip a coin 5000 times and print the number of heads
	// 1 = heads    2 = tails
	time_t t;
	int numheads = 0, randnum;
	srand((unsigned)time(&t));
	for (i = 1; i <= 5000; i++)
	{
		randnum = rand() % 2 + 1;
		if (randnum == 1)
			numheads++;
	}
	printf("The number of heads rolled was %d\n\n", numheads);

	system("PAUSE");
}