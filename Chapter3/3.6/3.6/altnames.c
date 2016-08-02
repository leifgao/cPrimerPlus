#include<stdio.h>
#include<inttypes.h>

int main(void)
{
	int16_t me16;

	int num = 20;

	 long num2 = 100;

	me16 = 4593;
	
	printf("first, assume int16_t is short: ");
	printf("me16 = %hd\n", me16);

	printf("next, let's not make any assumptions.\n");
	printf("me16 = %" PRId16 " \n",me16);
	printf("12"  "34""56");

	


	getchar();
	return 0;
}