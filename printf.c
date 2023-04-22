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
	int form_size, index = 0;
	char *str, size_str;

	va_start(nextVar, format);
	for (form_size = 0; format[form_size] != '\0'; form_size++)
		;


	/*"this is a %c boy"*/

	/**/
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
							_putchar(str[size_str]);
						index++;
						break;
					}					
				default:
					break;
			}
		}
		if (format[index] != '\0')
			_putchar(format[index]);
		else
			break;
		index++;
	}
	va_end(nextVar);
	return (form_size);
}
