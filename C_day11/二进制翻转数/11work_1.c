#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>


unsigned int reverse_bit(unsigned int n)
{
	int sum = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		sum += ((n >> i) & 1)pow(2, 31 - i);
	}
}
unsigned int reverse_bit(unsigned int n)
{
	int sum = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		sum += £¨((n >> i) & 1£© | 0) << (31 - i);
	}
}
int main()
{
	int num = 25;
	unsigned int ret = reverse_bit(num);
	printf("%u ", ret);
	system("pause");
	return 0;
}