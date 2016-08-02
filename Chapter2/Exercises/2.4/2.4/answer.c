#include<stdio.h>

void sayGood(void);
void sayOther(void);
int main(void)
{
	sayGood();
	sayGood();
	sayGood();
	sayOther();


	getchar();
	return 0;
}

void sayGood(void)
{
	printf("For he's a jolly good fellow!\n");
}

void sayOther(void)
{
	printf("Which nobody can deny!");
}