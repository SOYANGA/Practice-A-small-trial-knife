//3.����Ļ�ϴ�ӡ�������
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int arr[10][10] = { 0 };   //���ö�ά���鴢��
	for (i = 0; i < 10; i++)      //��
	{
		int j = 0;
		for (j = 0; j < 10; j++)  //��
		{
			if (j == 0)                  //��һ��
				arr[i][j] = 1;
			if (i == j)                 //������ȵ��Ǹ�Ԫ��
				arr[i][j] = 1;
			if (i>1 && j > 0)            //����Ԫ�ص�����һ�е���������Ԫ�صĺ�
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		int j = 0;
		for (j = 0; j < 10 - 1 - i; j++)   //��ӡ�ո�
		{
			printf("   ");
		}
		for (j = 0; j <= i; j++)            //���д�ӡ  
		{
			printf("%-5d ", arr[i][j]);           //%-5d ����ͻ��ô�ӡ��ӡ�ĺÿ� ����
		}
		printf("\n");               //����
	}
	system("pause");
	return 0;
}