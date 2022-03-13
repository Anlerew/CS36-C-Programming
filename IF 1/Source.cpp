#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

/*
	if statement - test for conditions / Booleans
										(true or false)
	if(condition)
	statement;

	if the condition is true, do the statement
	if the condition is false, skip the statement
*/
void main()
{
	int a, b;
	printf("Please enter 2 values ");
	scanf("%d%d", &a, &b);
	if (a > b)
		printf("\n\nFirst value is bigger\n\n");
	if (a == b) //Must USE == to test for equality
		printf("\n\nThe values are equal\n\n");
	system("PAUSE");
}

//MAKE SURE TO TEST ALL CONDITIONS!!!!!!!!!!!

/*
	Relational Operators

	== Equality
	!= Not Equal
	> Greaer Than
	>= Greater Than or Equal To
	< Less Than
	<= Less Than or Equal To

	Logical Operators

	! Not
	&& And
	|| Or

	eg if(score >= 80 && score < 90)
	printf("Your grade is B\n");

	if(num < 1 || num > 5)
	printf("Invalid input");

*/