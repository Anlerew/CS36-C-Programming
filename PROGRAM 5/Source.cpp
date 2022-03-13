#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void load(float *a, float *b, float *c)
{
	printf("Enter 3 float values ");
	scanf("%f%f%f", &(*a), &(*b), &(*c));
}

void printload(float x, float y, float z)
{
	printf("The 3 float values are: %f %f %f\n", x, y, z);
}

void sort(float num1, float num2, float num3, float *smallest, float *middle, float *biggest)
{
	if ((num1 < num2) && (num1 < num3))
	{
		num1 = *smallest;
		if (num2 > num3)
		{
			num2 = *biggest;
			num3 = *middle;
		}
	}
	if ((num1 < num2) && (num3 < num1))
	{
		num1 = *smallest;
		if (num2 < num3)
		{
			num2 = *middle;
			num3 = *biggest;
		}
	}
	if ((num1 > num2) && (num3 > num1))
	{
		num1 = *middle;
		if (num2 < num3)
		{
			num2 = *smallest;
			num3 = *biggest;
		}
	}
	if ((num1 < num2) && (num3 < num1))
	{
		num1 = *middle;
		if (num2 > num3)
		{
			num2 = *biggest;
			num3 = *smallest;
		}
	}
	if ((num1 > num2) && (num1 > num3))
	{
		num1 = *biggest;
		if (num3 > num2)
		{
			num3 = *middle;
			num2 = *smallest;
		}
	}

	if ((num1 > num2) && (num1 > num3))
	{
		num1 = *biggest;
		if (num2 > num3)
		{
			num2 = *biggest;
			num3 = *smallest;
		}
	}
}

void print(float j, float k, float l)
{
	printf("The greatest amount of the 3 float values is: %f", l);
	printf("\n\nThe 3 float values from lowest to highest is: %f  %f  %f\n", j, k, l);
	
}

void main()
{
	float g, h, i, m, n, o;
	load(&g, &h, &i);
	printload(g, h, i);
	sort(g, h, i, &m, &n, &o);
	print(g, h, i);
	system("PAUSE");
}

/*
Enter 3 float values 1.5 1.0 3.2
The 3 float values are: 1.500000 1.000000 3.200000
The greatest amount of the 3 float values is: 3.200000

The 3 float values from lowest to highest is: 1.000000  1.500000  3.200000
Press any key to continue . . .
*/