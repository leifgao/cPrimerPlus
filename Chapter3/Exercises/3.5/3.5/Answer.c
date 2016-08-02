#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	float sec = 3.156e7;

	int age;

	scanf("%d",&age);

	printf("%e",sec*age);


	getchar();
	getchar();
	return 0;
}