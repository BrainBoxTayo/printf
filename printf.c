#include<stdlib.h>
#include<stdio.h>
#include<stdarg.h>
#include"main.h"
/**
  * _printf - formatted printing
  * @format: string to be printed {"this is an integer %d"}
  * Return: the number of characters printed
  */

int _printf(const char *format, ...)
{
	va_list nextVar;
	int index = 0, count = 0;
	char *str, size_str;

	va_start(nextVar, format);
	while (format[index])
	{
		/*this is for string*/
		if (format[index] == '%')
		{
			index++;
			switch (format[index])
			{
				case ('s'):
					{
						str = va_arg(nextVar, char *);
						for (size_str = 0; str[size_str]; size_str++)
							count += _putchar(str[size_str]);
						index++;
						break;
					}
				case ('c'):
					{
						count += _putchar(va_arg(nextVar, int));
						index++;
						break;
					}
				case ('d'):
					{
						count += print_number(va_arg(nextVar, int));
						index++;
						break;

					}
				case ('i'):
					{
						int num = va_arg(nextVar, int);
						print_number(num);
						index++;
						count += count_digits(num);
						break;
					}
				default:
					break;
			}
		}
		if (format[index] != '\0')
			count += _putchar(format[index]);
		else
			break;
		index++;
	}
	va_end(nextVar);
	return (count + 1);
}

int count_digits(int num)
{
	int count = 0;
	while (num != 0)
	{
		count++;
		num /= 10;
	}
	return count;
}
