#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int i;
	scanf("%d",&i);

	int j = 1;

	int sum = 0;

	while (j <= i)
	{
		sum += j*j;
		j++;
	}
	printf("sum is %d",sum);

	getchar();
	getchar();
	return 0;
}