/*************************************************************************
	> File Name: 14work_2.c
	> Author: SOYANGA
	> Mail: 321830725@qq.com 
	> Created Time: 2018年10月06日 星期六 13时35分21秒
 ************************************************************************/

#include<stdio.h>
#include<assert.h>
#include<string.h>

int Find_arr(char* arr, char* p, int st)
{
	assert(arr&&p);

	if(strlen(p) != st)
	{
		return 0;
	}
	strncat(arr,arr,st);                //尾部添加字符串库函数
	return strstr(arr, p)== NULL?0:1;     //在字符串中判断是否是子字符串库函数
}

int main()
{
	char arr[] = "ABCD";
	char p[]="BCAD";
	int st = strlen(arr);
	if(Find_arr(arr, p ,st) != 0)
	{
		printf("找到了\n");
	}
	else
	{
		printf("找不到\n");
	}
	return 0;
}
