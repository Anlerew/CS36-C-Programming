#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void main()
{
	float a = 123.4567, b = 46.41111, c = 15.0;

	//unformatted output
	printf("Your pay is $%f\n", a);
	printf("Your pay is $%f\n", b);
	printf("Your pay is $%f\n\n\n", c);

	//formatted output to 2 decimal places
	//automatically rounds
	printf("Your pay is $%0.2f\n", a);
	printf("Your pay is $%0.2f\n", b);
	printf("Your pay is $%0.2f\n\n\n", c);

	printf("Your pay is $%10.2f\n", a);
	printf("Your pay is $%10.2f\n", b);
	printf("Your pay is $%10.2f\n\n\n", c);

	system("PAUSE");
}