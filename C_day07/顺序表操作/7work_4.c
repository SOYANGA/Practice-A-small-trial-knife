//4.����һ�����飬
//ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include<stdlib.h>
//void intit(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i+1;
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%-2d ", arr[i]);
//	}
//	printf("\n");
//}
//void empty(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}	
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	intit(arr,sz);
//	print(arr, sz);
//	reverse(arr,sz);
//	print(arr, sz);
//	empty(arr, sz);
//	print(arr, sz);
//	system("pause");
//	return 0;
//}