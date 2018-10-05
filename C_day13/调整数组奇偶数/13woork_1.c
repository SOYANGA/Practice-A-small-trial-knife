/*************************************************************************
	> File Name: 13woork_1.c
	> Author: SOYANGA
	> Mail: 321830725@qq.com 
	> Created Time: 2018年10月05日 星期五 13时37分49秒
 ************************************************************************/

#include<stdio.h>
#include<assert.h>

void Print(int* a, int n)   //打印
{
	assert(a);
	int i = 0;
	for(i = 0; i < n; i++ )
	{	
		printf("%d ",a[i]);
	}
	printf("\n");
}

void Swap(int* a1, int* a2)  //交换
{
	assert(a1&&a2);
	int temp = *a1;
	*a1 = *a2;
	*a2 = temp;
}
void ADjust(int* arr, int left, int right)  //调整
{
	assert(arr);
	while(left < right)
	{
		while((left < right) && (arr[left]%2 == 1))    //从左向右找 偶数
		{
			left++;
		}
		while((left < right) && (arr[right]%2 ==0)) //从右像左找 奇数
		{
			right--;
		}
		if(left < right)                          //交换
		{
			Swap(&arr[left], &arr[right]);
			right--;
			left++;
		}
		else
			break;
	}

}

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int size = sizeof(arr) / sizeof(int);
	ADjust(arr, 0, size-1);
	Print(arr, size);
	return 0;
}
