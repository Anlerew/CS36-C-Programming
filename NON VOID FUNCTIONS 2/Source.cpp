#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*
	return gross pay using time and a half overtime

	all hours over 40 are paid 1.5 your pay

	eg 30 hours at $20 per hour
		gross pay would be 30 * 20 =$600

	eg 50 hours at $20 per hour
		(40 * 20) + (10 * 30) = $1100
		(regular)	(overtime)
*/

float findgross(float hours, float rate)
{
	if (hours <= 40)
		return hours * rate;
	return (40 * rate) + (hours - 40) * rate * 1.5;
}

// once a return statement is hit in the function, you leave
// the function

void main()
{
	float h, r;
	printf("Enter the hours worked and the rate ");
	scanf("%f%f", &h, &r);
	printf("\n\nYour pay is $%0.2f\n\n", findgross(h, r));
	system("PAUSE");
}