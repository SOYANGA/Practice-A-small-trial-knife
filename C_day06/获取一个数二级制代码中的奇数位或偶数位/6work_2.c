////2.获取一个数二进制序列中所有的偶数位和奇数位，分别输出二进制序列
#include<stdlib.h>
#include<stdio.h>
int main()
{
	int num = 0;
	int i = 0;
	scanf_s("%d", &num);
	for (i = 31; i >= 1; i -= 2)  //奇数位开始（32 , 30, 28 ,26 ...)对应第（1，3，5，7，9...）位
	{
		printf("%d", (num >> i) & 1); //右移位>>按位与&1
	}
	printf("\n");
	for (i = 30; i >= 0; i -= 2)//偶数位开始（31，29，27，25...）对应第（2，4，6，8....）位
	{
		printf("%d", (num >> i) & 1);//右移位>>按位与&1
	}
	printf("\n");
	system("pause");
	return 0
}