//1.��ɲ�������Ϸ��
#include<stdio.h>
#include <stdlib.h>
#include<time.h>
void menu()
{
	printf("*****************************************\n");
	printf("*************   1.play  *****************\n");
	printf("*************   0.exit   ****************\n");
	printf("*****************************************\n");
}
void game()
{
	int ret = 0;      //���������
	int input = 0;   //����µ���
	int i = 0;      //�ж�������Ϣ
	ret = rand() % 100 + 1;   //���������101 ��1 ֮�����   ret = rand() % (max1 - min1) + min1;
	while (1)
	{
		printf("������Ҫ�µ�����\n");
		scanf_s("%d", &input);
		if (input > ret)
		{
			printf("�´���,���ٲ�\n");
			i++;
		}
		if (input < ret)
		{
			printf("��С�ˣ����ٲ�\n");
			i++;
		}
		else if (input == ret && i == 0)
		{
			printf("���˹�ʺ���˰ɣ��¶��ˣ���\n");
			break;
		}
		else if (input == ret && i != 0)
		{
			printf("��ϲ�㣬�¶��ˣ���\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));  //��������ɱ�־
	do
	{
		menu();                      //�˵�ģ��
		printf("��ѡ��");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������������\n");
			break;
		}
	} while (input);
	system("pause");
	return 0;
}