#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int const min = 60;

	int num;

	scanf("%d", &num);
	while (num > 0)
	{
		int shi = num / min;

		int fen = num % min;

		printf("您输入的分钟数是%d\n", num);

		printf("经过转化后是%d个小时%d分钟\n",shi,fen);

		scanf("%d", &num);
	}
	return 0;
}