/*************************************************************************
	> File Name: 15work_1.c
	> Author: SOYANGA
	> Mail: 321830725@qq.com 
	> Created Time: 2018年10月07日 星期日 13时21分55秒
 ************************************************************************/

#include<stdio.h>
#include <stdarg.h>

int average(int n ,...)
{
	va_list arg;//创建指针  char * arg
	int i = 0;
	int sum = 0;
	va_start(arg, n);//初始化指针arg指向可变参数列表的第一位  arg=(char*)&n+size_t int
	for(i = 0; i < n ; i++)
	{
		sum += va_arg(arg, int); //利用循环来实现累加可变参数列表的每一位（强转位int*) sum +(*(int*)(arg +=4)-4)
	}
	va_end(arg);//把指针还原为空指针NULL （arg = (char*)0)
	return sum / n;
}

int main()
{
	int a = 1;
	int b = 2;
	int c = 3;
	int avg = average(3,a,b,c);
	printf("avg = %d ",avg);
	return 0;
}
