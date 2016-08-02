#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define WEEKDAYS  7

void calDays(int days);

int main()
{
	int day;

	scanf("%d",&day);

	calDays(day);


	getchar();
	getchar();
	return 0;
}


void calDays(int days)
{
	int week = days / WEEKDAYS;
	int day = days % WEEKDAYS;

	printf("%d days are %d weeks, %d days",days,week,day);
}