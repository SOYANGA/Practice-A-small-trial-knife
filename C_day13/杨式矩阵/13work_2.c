/*************************************************************************
	> File Name: 13work_2.c
	> Author: SOYANGA
	> Mail: 321830725@qq.com 
	> Created Time: 2018年10月05日 星期五 13时58分27秒
 ************************************************************************/

#include<stdio.h>
#include<assert.h>


void find(int arr[3][3], int* pi, int* pj, int key)
{
	assert(arr);
	int x = 0;
	int y = *pj-1;
	while(x < *pi&&y>=0)
	{
	 	if(arr[x][y] == key)                            //找到
		{
			*pi = x;
			*pj = y;
			return;
		}
		else if(arr[x][y] < key)                //大于 当前行的最大一个数 则换行
		{
			x++;
		}
		else                                    //小于当前行的最大一个数 则向行头移动
		{
			y--;
		}
	}
	*pi = -1;                             // 没找到
	*pj = -1;
	return;
}

int main()
{
	int arr[3][3] = {1,2,3,4,5,6,7,8,9};
	int key = 1;
	int i = 3;
	int j = 3;
	find(arr , &i, &j ,key);  //没有利用返回值来确定，而是通过传俩个地址，通过find函数来改变两个值的数从而判断是否存在
	if((i != -1)&&(j!=-1))
	{
		printf("找到了:%d \n",arr[i][j]);
	}
	else
	{
		printf("没找到\n");
	}
	return 0;
}
