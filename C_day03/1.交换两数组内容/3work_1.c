//1.������A�е����ݺ�����B�е����ݽ��н�����������һ����
#include <stdlib.h>
#include  <stdio.h>
int main()
{
	int arr1[] = { 1, 2, 3, 4, 5 };
	int arr2[] = { 6, 7, 8, 9, 1 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	int i = 0;
	for (i = 0; i < sz; i++)  //����ѭ������ÿ�������λ��  ������memcopy ������ʱ���������
	{
		int temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr2[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}