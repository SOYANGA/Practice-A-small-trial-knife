////1.写一个函数返回参数二进制中 1 的个数
////	比如： 15 0000 1111 4 个 1
////	程序原型：
//	int count_one_bits(unsigned int value)
//{
//		// 返回1的位数 
//	}
#include<stdlib.h>
#include<stdio.h>
int count_one_bits(int n)
{
	int count = 0;     //计数器
	while (n)
	{
		n = n&(n - 1);    //算法：与一个和自己差1的数，就就出现使的自己少去一位1的数       
		count++;
	}
	return count;
}
int main()
{
	int num = 0;
	scanf_s("%d", &num);
	int ret = count_one_bits(num);
	printf("ret = %d \n", ret);
	system("pause");
	return 0;
}