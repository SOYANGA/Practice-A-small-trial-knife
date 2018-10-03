#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 8;
	int b = 6;
	/*int AVG = a + (b - a) / 2;*/
	int AVG = (a&b) + ((a^b) >> 1);
	printf("%d \n", AUG);
	system("pause");
	return 0;
}