#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void load(char names[][20])
{
	// load the array from the keyboard
	for (int i = 0; i < 10; i++)
	{
		printf("Enter a name ");
		gets_s(names[i]);
	}
}

void sort(char a[], char b[])
{
	char temp;
	int i, j;
	for (i = 0; i < 10; i++)
	{
		b[i] = a[i];
	}
	// sort in ascending order - low to high
	// > ascending order  < descnding order
	for (i = 0; i < 10; i++)
		for (j = 0; j < 10 - 1; j++)
			if (b[j] > b[j + 1])
			{
				temp = b[j];
				b[j] = b[j + 1];
				b[j + 1] = temp;
			}
}

void main()
{
	char names[10][20]; // 5 strings of length 9 + NULL
	int i, j;

	load(names);
	// print the array
	printf("\n\n");
	for (i = 0; i < 10; i++)
		printf("%s\n", names[i]);
	printf("\n\n");
	// print sorted
	sort(names);
	printf("\n\n");
	for (i = 0; i < 10; i++)
		printf("%s\n", names[i]);
	printf("\n\n");

	// search for a name and output Found or Not Found
	char search[20];
	int flag = 0; // 0 means no match 1 means match
	printf("Who would you like to search for? ");
	gets_s(search);
	for (i = 0; i < 10; i++)
		if (strcmp(search, names[i]) == 0)
		{
			printf("Found\n\n");
			flag = 1;
		}
	if (flag == 0)
			printf("Not Found\n\n");

	system("PAUSE");
}

/*
Enter a name Adam
Enter a name Gabriel
Enter a name Jessica
Enter a name Barbara
Enter a name Zac
Enter a name Ellie
Enter a name Connor
Enter a name Louis
Enter a name Harold
Enter a name Dylan


Adam
Gabriel
Jessica
Barbara
Zac
Ellie
Connor
Louis
Harold
Dylan


Adam
Barbara
Connor
Dylan
Ellie
Gabriel
Harold
Jessica
Louis
Zac


Who would you like to search for? Connor
Found

Press any key to continue . . .


*/