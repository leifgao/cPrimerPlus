#include<stdio.h>

int main(void)
{
	char zimu[26];

	char first = 'a';

	for (int i = 0; i < 26; i++,first++)
	{
		zimu[i] = first;
	}

	for (int i = 0; i < 26; i++)
	{
		printf("%c\n",zimu[i]);
	}

	getchar();
	return 0;
}