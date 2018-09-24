#include <stdio.h>
#include <stdlib.h>
int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))   //能被4整除  且 能被400整除不能被100整除的年份
			printf("%d ", year);//判断1000年---2000年之间的闰年 
	}
	system("pause");
	return 0;
}