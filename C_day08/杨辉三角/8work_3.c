//3.在屏幕上打印杨辉三角
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int arr[10][10] = { 0 };   //利用二维数组储存
	for (i = 0; i < 10; i++)      //行
	{
		int j = 0;
		for (j = 0; j < 10; j++)  //列
		{
			if (j == 0)                  //第一列
				arr[i][j] = 1;
			if (i == j)                 //行列相等的那个元素
				arr[i][j] = 1;
			if (i>1 && j > 0)            //其余元素等于上一行的左右两个元素的和
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		int j = 0;
		for (j = 0; j < 10 - 1 - i; j++)   //打印空格
		{
			printf("   ");
		}
		for (j = 0; j <= i; j++)            //按行打印  
		{
			printf("%-5d ", arr[i][j]);           //%-5d 这个就会让打印打印的好看 均衡
		}
		printf("\n");               //换行
	}
	system("pause");
	return 0;
}