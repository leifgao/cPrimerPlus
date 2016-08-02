#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	long num;
	long sum = 0L;
	int status;

	printf("Please enter an integer to bu summed.");
	printf("(a to quit):");
	status = scanf("%ld", &num);
	while (status = 1)
	{
		sum = sum + num;
		printf("please enter next integer (q to quit):");
		status = scanf("%ld",&num);
	}
	printf("those integers sum to %ld.\n",sum);
	return 0;
}