#include<stdio.h>
#include<stdarg.h>
/**
  * _printf - formatted printing
  * @format: string to be printed {"this is an integer %d"}
  * Return: the number of characters printed
  */

int _printf(const char *format, ...)
{
	va_list nextVar;
	int form_size;

	va_start(nextVar, format);
	for (form_size = 0; format[form_size] != '\0'; form_size++)
		;

	/*"this is a %c boy"*/

	/**/
	while (format)
	{


	}


	return (form_size);
}
