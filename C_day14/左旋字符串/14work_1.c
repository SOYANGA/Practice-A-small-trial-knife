/*************************************************************************
	> File Name: 14work_1.c
	> Author: SOYANGA
	> Mail: 321830725@qq.com 
	> Created Time: 2018年10月06日 星期六 12时03分06秒
 ************************************************************************/

#include<stdio.h>
#include<assert.h>
#include<string.h>

////////////////////////////////////////////////////////////////////
void Swap(char* a1, char* a2)
{
	assert(a1&&a2);
	char temp = *a1;
	*a1 = *a2;
	*a2 = temp;
}
void Left_arr1(char arr[], int st ,int n)
{
	assert(arr);
	int i =0;
	while(i<n)    //左旋几次
	{
		int x = 0;
		while((x+1)<=(st-1))                     //交换相邻字母
		{
			Swap(&arr[x],&arr[x+1]);
			x++;
		}
		i++;
	}
}

////////////////////////////////////////////////////////////////////

void reverse_arr(char* left, char* right)
{
	assert(left&&right);
	while(left<right)
	{
		Swap(left, right);
		left++;
		right--;
	}
}
void Left_arr2(char arr[], int st ,int n)
{
	assert(arr);
	reverse_arr(&arr[0], &arr[st-1]);
	reverse_arr(&arr[0], &arr[st-n-1]);
	reverse_arr(&arr[st-n],&arr[st-1]);
}

int main()
{
	char arr[] = "ABCD";
	int st = strlen(arr);
	int num = 0;
	scanf("%d",&num);
	num = num%st;  //防止溢出
//	Left_arr1(arr, st, num);
	Left_arr2(arr, st ,num);
	printf("%s \n",arr);
   	return 0;
}
