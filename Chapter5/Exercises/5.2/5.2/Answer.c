#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int num;

	scanf("%d",&num);

	int max = num + 10;

	while (num<=max)
	{
		printf("%d ",num++);
	}

	getchar();
	getchar();

	return 0;
}