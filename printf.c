#include <stdarg.h>
#include "main.h"
/**
 * _printf - formatted printing
 * @format: string to be printed {"this is an integer %d"}
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list nextVar;
	int index = 0, count = 0;

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
					count += print_string(nextVar);
					break;
				case ('c'):
					count += print_char(nextVar);
					break;
				case ('d'):
				case ('i'):
					count += print_number(nextVar);
					break;
				default:
					count += _putchar('%');
					count += _putchar(format[index]);
			}
		}
		else
		{
			count += _putchar(format[index]);
		}
		index++;
	}
	va_end(nextVar);
	return (count);
}
