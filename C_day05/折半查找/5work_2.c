//2.д����������������������в�����Ҫ�����֣��ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�
#include<stdio.h>
#include <stdlib.h>
int search(int arr[], int key, int left, int right)
{
	while (left <= right)  //��������key    //���±�  //���±�
	{
		int mid = left + ((right - left) / 2);   ///��ֵ
		if (key == arr[mid])
		{
			return mid;       //�ҵ������±�
		}
		else if (arr[mid] < key) //����ֵС��keyֵ
		{
			left = mid + 1;     //�����±�䵽��ֵ����һ��λ�ã��ұߣ�
		}
		else if (arr[mid] > key) //����ֵ����keyֵ
		{
			right = mid - 1;   //�����±�䵽��ֵ����һ��λ�ã���ߣ�
		}
	}
	return -1;    //�Ҳ�������-1
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int left = 0;
	int key = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);  //�����С
	int right = sz - 1;                    //���±�
	scanf_s("%d", &key);                  //Ҫ�ҵ���
	int ret = search(arr, key, left, right);  //����ֵ
	if (-1 == ret)
	{
		printf("û�ҵ�����ֵΪ%d ", ret);
	}
	else
	{
		printf("�ҵ������������±�Ϊ��%d ", ret);
	}
	system("pause");
	return 0;
}