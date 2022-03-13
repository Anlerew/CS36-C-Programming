#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct Student
{
	char name[20];
	int t1, t2, t3;
	float avg;
};	// leave the semicolon alone

void main()
{
	Student s;
	printf("Enter a name ");
	gets_s(s.name);
	printf("Enter three test scores ");
	scanf("%d%d%d", &s.t1, &s.t2, &s.t3);
	s.avg = (s.t1 + s.t2 + s.t3) / (float)3;
	printf("\n\nStudent: %s\n", s.name);
	printf("Test Scores: %d  %d  %d\n", s.t1, s.t2, s.t3);
	printf("Average: %0.3f\n\n", s.avg);
	system("PAUSE");
}