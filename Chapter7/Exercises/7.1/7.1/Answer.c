#include<stdio.h>
#include<ctype.h>
int main(void)
{
	int blank;
	int lines;
	int chars;

	char c;

	while ( (c = getchar()) != '#' )
	{
		if (isblank(c))
		{
			blank++;
			continue;
		}
		if ('\n' == c)
		{
			lines++;
			continue;
		}

		chars++;
	}

	printf("空白字符是：%d\n换行符是：%d\n其它字符数是：%d\n", blank, lines, chars);


	getchar();
	return  0;
}