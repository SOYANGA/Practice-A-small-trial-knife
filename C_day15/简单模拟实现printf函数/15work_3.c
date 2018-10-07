/*************************************************************************
	> File Name: 15work_3.c
	> Author: SOYANGA
	> Mail: 321830725@qq.com 
	> Created Time: Sun 07 Oct 2018 01:55:23 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdarg.h>

void Print_int(int n)
{
	if(n > 9)
	{
		Print_int(n/10);
	}
	putchar(n%10+'0');
}

void Print(const char* format,...)
{
	va_list arg;
	va_start(arg, format);
	while(*format)
	{
		switch(*format)
		{
			case's':
				{
					char* str = va_arg(arg,char*);
					while(*str)
					{
						putchar(*str);
						str++;
					}
					break;
				}
			case'c':
				{
					int ch = va_arg(arg,int);
					putchar(ch);
					break;
				}
			case'd':
				{
					int ret = va_arg(arg,int);
					Print_int(ret);
					break;
				}
			default:
				{
					putchar(*format);
					break;
				}
		}
		format++;
	}
}


int main()
{	
	Print("s ccc d.\n","hello",'b','i','t',100);
	return 0;
}
