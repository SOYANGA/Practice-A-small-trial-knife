//3.3.��д����ģ��������������ĳ�����
//����������������룬������ȷ����ʾ����¼�ɹ���, ������󣬿����������룬����������Ρ����ξ�������ʾ�˳�����
#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
	char password[20] = { 0 };        //���������
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("����������:");
		scanf_s("%s", password);  //��������
		if (strcmp("123456", password) == 0)   //�Ƚ�����
		{
			printf("��½�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (i == 3)  //����3������
	{
		printf("������������˳�����\n");
		system("pause");
		return 0;
	}
}