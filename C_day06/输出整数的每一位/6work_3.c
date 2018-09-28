////3. 输出一个整数的每一位。
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num = 0;
	int i = 0;
	scanf_s("%d", &num);
	while (num)
	{
		printf("%d", num % 10);
		num /= 10;
	}
	system("pause");
	return 0;
}