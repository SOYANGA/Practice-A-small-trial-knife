/*************************************************************************
	> File Name: 12work_2.c
	> Author: SOYANGA
	> Mail: 321830725@qq.com 
	> Created Time: 2018年10月04日 星期四 13时53分51秒
 ************************************************************************/

#include<stdio.h>
#define MAX(a,b)((a>b)?(a):(b))

int main()
{
	int a = 1;
	int b = 2;
	int max = 0;
	max = MAX(a,b);
	printf("%d \n",max);
	return 0;
}
