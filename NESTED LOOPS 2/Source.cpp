#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

/*
3 students with test scores ending with -999
print name and average for each student
assume each student has at least one test score

for loop on the outside and a do loop on the inside
*/

void main()
{
	char name[20];
	int score, sum = 0, count = 0;
	float avg;

	for (int i = 1; i <= 3; i++)
	{
		printf("Enter a name  ");
		gets_s(name);
		printf("Enter a score but not -999  ");
		scanf("%d", &score);
		do
		{
			sum += score;
			count++;
			printf("Enter a score, -999 to quit  ");
			scanf("%d", &score);
		} while (score != -999);
		avg = sum / (float)count;
		printf("\n%s had an average of %0.3f\n\n", name, avg);
		getchar();
		sum = count = 0;
	}
	system("PAUSE");
}