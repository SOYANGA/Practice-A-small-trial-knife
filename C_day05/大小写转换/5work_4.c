//4.4.��дһ�����򣬿���һֱ���ռ����ַ��������Сд�ַ��������Ӧ�Ĵ�д�ַ���������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ�����������ֲ����
#include<stdio.h>
#include <stdlib.h>
#include<conio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)    //��ȡ���������ֵ��ֱ������EFO  ��while ((ch = getc(stdin)) != EOF) ��ͬ
	if (ch >= 'A' && ch <= 'Z')    //��дתСд
	{
		putchar(ch + 32);
	}
	else if (ch >= 'a'&& ch <= 'z')  //Сдת��д 
		putchar(ch - 32);
	else if (ch >= '0' && ch <= '9')   //��������������    
	{
		;
	}
	else      //�����������ԭ������ַ�
	{
		putchar(ch);
	}
}
//getchar ֻ������enter ʱ�����׼�����������ַ���һ��һ�����ַ���