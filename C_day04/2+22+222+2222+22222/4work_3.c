//3.��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣����磺2 + 22 + 222 + 2222 + 22222
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0;  //���� a eg:  2    ��  2+22+222+2222+22222
	int n = 0;  //ǰ����
	int i = 0;  //ѭ��
	int sum = 0;  //��
	int j = 0;    //ǰһ��
	printf("����:");
	scanf("%d", &a);

	printf("ǰ����:");
	scanf("%d", &n);//������˵�Ļ�n��ʼ����ʱ��ֱ�Ӹ�ֵ5
	for (i = 0; i < n; i++)
	{
		j = j * 10 + a;   ///����ǰһ��
		sum = sum + j;   //����֮��
	}
	printf("sum=%d\n", sum);
	system("pause");
	return 0;
}