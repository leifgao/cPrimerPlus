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

		printf("������ķ�������%d\n", num);

		printf("����ת������%d��Сʱ%d����\n",shi,fen);

		scanf("%d", &num);
	}
	return 0;
}