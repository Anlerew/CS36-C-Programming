#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*

	do loop - indeterministic, exit-controlled

do
{
.
.	loop body
.
}
while (condition)


keep doing the loop while the condition is true

"READ CHECK PROCESS READ CHECK PROCESS ..."

find the sum of values until -999 is entered
eg 2, 3, 4, -999 the sum is 9 (Never process the flag)

YOU MUST SET ALL YOUR SUMS AND COUNTERS TO 0
*/

void main()
{
	int num, sum = 0;
	printf("Enter a value, but not -999 ");
	scanf("%d", &num);
	do
	{
		sum += num;
		printf("Enter a value, -999 to quit ");
		scanf("%d", &num);
	} while (num != -999);
	printf("\n\nThe sum is %d\n\n", sum);
	system("PAUSE");
}