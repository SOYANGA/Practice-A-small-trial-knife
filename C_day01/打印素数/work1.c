#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int i = 0;
	for (i = 101; i <= 200; i += 2)//������Χ
	{
		int j = 0;
		for (j = 2; j <= sqrt(i); j++)//  �ж�����������    ��i-sqort(i)��Χ�ڲ��ܱ��������������
		{
			if (i%j == 0)  //�ж��ܲ��ܱ�����
				break;
		}
		if (i > sqrt(i))       
			printf("%d ", i);//��ӡ100~200 ֮������� 
	}
	system("pause");
	return 0;
}