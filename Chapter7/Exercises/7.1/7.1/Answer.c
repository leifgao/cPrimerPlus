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

	printf("�հ��ַ��ǣ�%d\n���з��ǣ�%d\n�����ַ����ǣ�%d\n", blank, lines, chars);


	getchar();
	return  0;
}