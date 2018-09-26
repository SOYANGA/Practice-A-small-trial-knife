////计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值。
//#include <stdlib.h>
//#include  <stdio.h>
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i < 100; i++)
//	{
//		sum = sum + flag*1.0 / i;  //sum不断求和  加上 flag1/i  flag 在不断变化  由-1 到1 不断变化  
//		flag = -flag;
//	}
//	printf("%lf ", sum);
//	system("pause");
//	return 0;
//}