////4.编写一个程序，它从标准输入读取C源代码，并验证所有的花括号都正确的成对出现。
//#include <stdlib.h>
//#include <stdio.h>
//int main()
//{
//	int ch = 0;  //标准输入读取的字符
//	int count = 0;  //计数{ 的个数
//	while ((ch = getchar()) != EOF)  //当遇到EOF就结束
//	{
//		if (ch == '{')       //当遇到{  让计数器加1
//			count++;
//		else if (ch == '}' && count == 0)   // 只要在count计数器为零时，出现}时就不会括号匹配直接退出
//		{
//			printf("不匹配\n");
//			system("pause");
//			return 0;
//		}
//
//		else if (ch == '}' && count != 0)   //当遇到}时就绕过count计数器减一
//		{
//			count--;
//		}
//	}
//	if (count == 0)    //当计数器为0时匹配
//	{
//		printf("匹配\n");
//	}
//	else                //反之匹配
//	{
//		printf("不匹配\n");
//	}
//	system("pause");
//	return 0;
//}