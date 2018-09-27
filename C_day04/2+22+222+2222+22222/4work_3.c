//3.求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，例如：2 + 22 + 222 + 2222 + 22222
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0;  //数字 a eg:  2    则  2+22+222+2222+22222
	int n = 0;  //前几项
	int i = 0;  //循环
	int sum = 0;  //和
	int j = 0;    //前一项
	printf("数字:");
	scanf("%d", &a);

	printf("前几项:");
	scanf("%d", &n);//如题所说的化n初始化的时候直接赋值5
	for (i = 0; i < n; i++)
	{
		j = j * 10 + a;   ///计算前一项
		sum = sum + j;   //总体之和
	}
	printf("sum=%d\n", sum);
	system("pause");
	return 0;
}