////4.��дһ���������ӱ�׼�����ȡCԴ���룬����֤���еĻ����Ŷ���ȷ�ĳɶԳ��֡�
//#include <stdlib.h>
//#include <stdio.h>
//int main()
//{
//	int ch = 0;  //��׼�����ȡ���ַ�
//	int count = 0;  //����{ �ĸ���
//	while ((ch = getchar()) != EOF)  //������EOF�ͽ���
//	{
//		if (ch == '{')       //������{  �ü�������1
//			count++;
//		else if (ch == '}' && count == 0)   // ֻҪ��count������Ϊ��ʱ������}ʱ�Ͳ�������ƥ��ֱ���˳�
//		{
//			printf("��ƥ��\n");
//			system("pause");
//			return 0;
//		}
//
//		else if (ch == '}' && count != 0)   //������}ʱ���ƹ�count��������һ
//		{
//			count--;
//		}
//	}
//	if (count == 0)    //��������Ϊ0ʱƥ��
//	{
//		printf("ƥ��\n");
//	}
//	else                //��֮ƥ��
//	{
//		printf("��ƥ��\n");
//	}
//	system("pause");
//	return 0;
//}