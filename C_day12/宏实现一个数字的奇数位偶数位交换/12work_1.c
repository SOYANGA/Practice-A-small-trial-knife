/*************************************************************************
	> File Name: 12work_1.c
	> Author: SOYANGA
	> Mail: 321830725@qq.com 
	> Created Time: 2018年10月04日 星期四 13时29分46秒
 ************************************************************************/

#include<stdio.h>
#define CHANGE_BIT(n) (((n&(0xaaaaaaaa))>>1)|((n&(0x55555555))<<1)) //取得奇数位取得偶数位 奇数位后移偶数位前移
//即达到交换的目的   注意！！！！！  括号很重要！！！ 括号很重要！！！！！ 括号很重要！！！！！

int main()
{
	int num = 10;
	num = CHANGE_BIT(num);
	printf("%d \n",num);
	return 0;
}
