#include <stdio.h>
#include <stdlib.h>
int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))   //�ܱ�4����  �� �ܱ�400�������ܱ�100���������
			printf("%d ", year);//�ж�1000��---2000��֮������� 
	}
	system("pause");
	return 0;
}