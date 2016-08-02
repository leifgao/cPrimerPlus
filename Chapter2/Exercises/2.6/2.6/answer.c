#include<stdio.h>
void saySome(void);
int main(void)
{
	saySome();
	saySome();
	saySome();
	printf("\n");
	saySome();
	saySome();
	printf("\n");
	saySome();
	printf("\n");
	getchar();
	return 0;
}

void saySome(void)
{
	printf("Smile!");
}