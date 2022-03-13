#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 5

// array of structs program

struct Student
{
	char name[20];
	int t1, t2, t3;
	float avg;
};	// leave the semicolon alone

void load(struct Student s[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("Enter a name ");
		gets_s(s[i].name);
		printf("Enter three test scores ");
		scanf("%d%d%d", &s[i].t1, &s[i].t2, &s[i].t3);
		s[i].avg = (s[i].t1 + s[i].t2 + s[i].t3) / (float)3;
		getchar();
		printf("\n");
	}
}// prototype: void load(struct Student [], int);

void print(struct Student s[], int n)
{
	printf("\n\n");
	for (int i = 0; i < n; i++)
	{
		printf("\n\nStudent: %s\n", s[i].name);
		printf("Test Scores: %d  %d  %d\n", s[i].t1, s[i].t2, s[i].t3);
		printf("Average: %0.3f\n\n", s[i].avg);
	}
}

void sort(struct Student s[], int n)
{
	// sort on average high to low
	int i, j;
	Student t;
	for(i = 0; i < n-1; i++)
		for(j = 0; j < n-1; j++)
			if (s[j].avg, s[j  + 1].avg)
			{
				t = s[j];
				s[j] = s[j + 1];
				s[j + 1] = t;
			}
}

void calc(struct Student s[], int n)
{
	// find the average of test 1, test 2, test 3
	int sum1 = 0, sum2 = 0, sum3 = 0;
	float avg1, avg2, avg3;
	for (int i = 0; i < n; i++)
	{
		sum1 += s[i].t1;
		sum2 += s[i].t2;
		sum3 += s[i].t3;
	}
	avg1 = sum1 / (float)n;
	avg2 = sum2 / (float)n;
	avg3 = sum3 / (float)n;
	printf("The average for test 1 was %0.3f\n", avg1);
	printf("The average for test 2 was %0.3f\n", avg2);
	printf("The average for test 3 was %0.3f\n\n\n", avg3);
}

void savetext(struct Student s[], int n)
{
	FILE *f;
	f = fopen("D:\\studs.txt", "w");
	for (int i = 0; i < n; i++)
	{
		fprintf(f, "%s\n", s[i].name);
		fprintf(f, "%d %d %d %f\n", s[i].t1, s[i].t2, s[i].t3, s[i].avg);
	}
	fclose(f);
}

void retrievetext(struct Student s[], int n)
{
	FILE *f;
	int length;
	f = fopen("D:\\studs.txt", "r");
	for (int i = 0; i < n; i++)
	{
		fgets(s[i].name, sizeof(s[i].name), f);
		// remove the enter from the name
		length = strlen(s[i].name);
		s[i].name[length - 1] = '\0';
		fscanf(f, "%d%d%d%f\n", &s[i].t1, &s[i].t2, &s[i].t3, &s[i].avg);
	}// \n in fscanf is like getchar() for the text files
	fclose(f);
}

void savebin(struct Student s[], int n)
{
	FILE *f;
	f = fopen("D:\\studs.bin", "wb");
	fwrite(&s, sizeof(s[0]), n, f);
	fclose(f);
}

// for fwrite and fread, the parameters are:
// reference to the array, size of each array element,
// the size of the array, the file pointer

void retrievebin(struct Student s[], int n)
{
	FILE *f;
	f = fopen("D:\\studs.bin", "rb");
	fread(&s, sizeof(s[0]), n, f);
	fclose(f);
}

void main()
{
	Student s[SIZE];
	load(s, SIZE);
	sort(s, SIZE);
	print(s, SIZE);
	calc(s, SIZE);
	savetext(s, SIZE);
	retrievetext(s, SIZE);
	printf("\n\nAfter the text file is recieved\n\n");
	print(s, SIZE);
	savebin(s, SIZE);
	retrievebin(s, SIZE);
	printf("\n\nAfter the binary file is recieved\n\n");
	print(s, SIZE);
	system("PAUSE");
}