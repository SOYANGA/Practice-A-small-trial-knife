//�������������Լ��
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a = 24;
	int b = 32;
	int temp = 0;

	while ((temp = a%b))
	{
		a = b;
		b = temp;
	}

	printf("%d\n ", b);
	system("pause");
	return 0;
}