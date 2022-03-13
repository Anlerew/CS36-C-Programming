#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void load(char names[][10])
{
	// load the array from the keyboard
	for (int i = 0; i < 5; i++)
	{
		printf("Enter a name ");
		gets_s(names[i]);
	}
}

void main()
{
	char names[5][10]; // 5 strings of length 9 + NULL
	int i;

	load(names);

	// print the array
	printf("\n\n");
	for (i = 0; i < 5; i++)
		printf("%s\n", names[i]);
	printf("\n\n");

	// search for a name and output Found or Not Found
	char search[10];
	int flag = 0; // 0 means no match 1 means match
	printf("Who would you like to search for? ");
	gets_s(search);
	for (i = 0; i < 5; i++)
		if (strcmp(search, names[i]) == 0)
		{
			printf("Found\n\n");
			flag = 1;
		}
	if (flag == 0)
			printf("Not Found\n\n");

	system("PAUSE");
}