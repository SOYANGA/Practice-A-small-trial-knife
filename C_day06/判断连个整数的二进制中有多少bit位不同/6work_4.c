////4.4.编程实现： 
////两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
////输入例子 :
////1999 2299
////输出例子 : 7
#include<stdlib.h>
#include<stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	int temp = 0;
	int count = 0;
	scanf_s("%d%d", &m, &n);
	temp = m^n;  //先异或，再求异或后1的个数（异或：相异为1） 
	while (temp)
	{
		temp = temp&(temp - 1);
		count++;
	}
	printf("%d", count);
	system("pause");
