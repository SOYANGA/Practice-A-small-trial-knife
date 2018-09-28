//2.写代码可以在整型有序数组中查找想要的数字，找到了返回下标，找不到返回 - 1.（折半查找）
#include<stdio.h>
#include <stdlib.h>
int search(int arr[], int key, int left, int right)
{
	while (left <= right)  //查找数字key    //左下标  //右下标
	{
		int mid = left + ((right - left) / 2);   ///中值
		if (key == arr[mid])
		{
			return mid;       //找到返回下标
		}
		else if (arr[mid] < key) //当中值小于key值
		{
			left = mid + 1;     //让左下标变到中值的下一个位置（右边）
		}
		else if (arr[mid] > key) //当中值大于key值
		{
			right = mid - 1;   //让右下标变到中值的上一个位置（左边）
		}
	}
	return -1;    //找不到返回-1
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int left = 0;
	int key = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);  //数组大小
	int right = sz - 1;                    //左下标
	scanf_s("%d", &key);                  //要找的数
	int ret = search(arr, key, left, right);  //返回值
	if (-1 == ret)
	{
		printf("没找到返回值为%d ", ret);
	}
	else
	{
		printf("找到了在数组中下标为：%d ", ret);
	}
	system("pause");
	return 0;
}