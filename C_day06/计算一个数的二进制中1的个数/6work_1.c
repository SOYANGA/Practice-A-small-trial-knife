////1.дһ���������ز����������� 1 �ĸ���
////	���磺 15 0000 1111 4 �� 1
////	����ԭ�ͣ�
//	int count_one_bits(unsigned int value)
//{
//		// ����1��λ�� 
//	}
#include<stdlib.h>
#include<stdio.h>
int count_one_bits(int n)
{
	int count = 0;     //������
	while (n)
	{
		n = n&(n - 1);    //�㷨����һ�����Լ���1�������;ͳ���ʹ���Լ���ȥһλ1����       
		count++;
	}
	return count;
}
int main()
{
	int num = 0;
	scanf_s("%d", &num);
	int ret = count_one_bits(num);
	printf("ret = %d \n", ret);
	system("pause");
	return 0;
}