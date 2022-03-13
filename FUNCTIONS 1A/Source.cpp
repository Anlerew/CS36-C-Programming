#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*
	Funtions - for large programs, we will break them up into functions.
	eg I do not want a 5000 line main.

	Each function from about 35 to 50 lines.

	Use structure chart to design your software.
	The structure chart is a picture of the functions of a program.

	You can put the functions first followed by the main (FUNCTIONS 1A)
	OR
	You can put the main first followed by the functions (FUNCTIONS 1B)
*/

/*
	Global variables - declared outside the functions and can
		be accessed anywhere in the program.

	Local variables - declared inside the functions and can
			only be accessed in the function where declared.

	The scope of the variable - where the variable can be accessed.

	The scope of a global variable is the whole program.
	The scope of a local variable is the function where the
	variable is declared.
*/

int a, b, c, sum;
float avg;

void load()
{
	printf("Enter 3 values ");
	scanf("%d%d%d", &a, &b, &c);
}

void calc()
{
	sum = a + b + c;
	avg = sum / (float)3;
}

void print()
{
	printf("\n\nThe 3 values are %d  %d  %d\n", a, b, c);
	printf("The sum is %d\n", sum);
	printf("The average is %0.2f\n\n", avg);
}

void main()
{
	load();
	calc();
	print();
	system("PAUSE");
}