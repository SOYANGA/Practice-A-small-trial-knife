////4.4.���ʵ�֣� 
////����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
////�������� :
////1999 2299
////������� : 7
#include<stdlib.h>
#include<stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	int temp = 0;
	int count = 0;
	scanf_s("%d%d", &m, &n);
	temp = m^n;  //�������������1�ĸ������������Ϊ1�� 
	while (temp)
	{
		temp = temp&(temp - 1);
		count++;
	}
	printf("%d", count);
	system("pause");
