#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void fSanCiFang(float num);

int main(void)
{
	float num;

	scanf("%f",&num);

	fSanCiFang(num);


	getchar();
	getchar();
	return 0;
}

void fSanCiFang(float num)
{
	printf("%f",num*num*num);
}