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
	char str, *malloc_str, size_str;

	va_start(nextVar, format);
	for (form_size = 0; format[form_size] != '\0'; form_size++)
		;
	malloc_str = malloc(form_size * sizeof (char));

	/*"this is a %c boy"*/

	/**/
	while (format)
	{
		/*this is for string*/
		if (format[index] == '%')
		{
			switch (format[index + 1])
			{
				case ('s'):
					{
						for (size_str = 0; va_arg(nextVar, int) != '\0'; size_str++)
							_putchar(va_arg(nextVar, int));
						index++;
						break;
					}
				default:
					break;
		}
		_putchar(format[index]);
		index++;
	}
	va_end(nextVar);
	free(malloc_str);
	return (form_size);
}
