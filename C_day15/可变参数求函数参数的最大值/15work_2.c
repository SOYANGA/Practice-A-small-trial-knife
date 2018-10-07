/*************************************************************************
	> File Name: 15work_2.c
	> Author: SOYANGA
	> Mail: 321830725@qq.com 
	> Created Time: 2018年10月07日 星期日 13时38分34秒
 ************************************************************************/

#include<stdio.h>
#include<stdarg.h>

int Find_max(int n,...)
{
	va_list arg;   //char* arg ;创建
	va_start(arg,n);//初始化指针指向可变参数列表的第一位 arg = ((char*)&n + size_t int);
	int i = 0;
	int max = va_arg(arg ,int);  //定义最大值为第一个参数
	for(i = 1; i < n; i++)
	{
		int temp=va_arg(arg, int);//可变列表里面的第二个参数 向后变 循环几次就执行几次
		if(temp > max)                           //temp = (*(int*)((arg += 4) - 4))
		{
			max = temp;
		}
	}
	va_end(arg);
	return max;
}


int main()
{
	int a = 1;
	int b = 2;
	int c = 3;
	int i = 0;
	int max = Find_max(3,a,b,c);
	printf("max = %d ",max);
	return 0;
}
