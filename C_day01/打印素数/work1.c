#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int i = 0;
	for (i = 101; i <= 200; i += 2)//给定范围
	{
		int j = 0;
		for (j = 2; j <= sqrt(i); j++)//  判断素数的条件    在i-sqort(i)范围内不能被整除则就是素数
		{
			if (i%j == 0)  //判断能不能被整除
				break;
		}
		if (i > sqrt(i))       
			printf("%d ", i);//打印100~200 之间的素数 
	}
	system("pause");
	return 0;
}