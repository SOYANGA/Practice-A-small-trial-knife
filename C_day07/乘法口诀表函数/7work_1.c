//1.
//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
//输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
void tabuada(int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= x; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i*j);
		}
		printf("\n");
	}
}
int main()
{
	int x = 0;
	int y = 0;
	scanf("%d%d", &x, &y);
	tabuada(x, y);
	system("pause");
	return 0;
}