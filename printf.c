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

	if (format == NULL)
		return (-1);
	va_start(nextVar, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	while (format[index])
	{
		if (format[index] == '%')
		{
			index++;
			count += switch_help(format[index], nextVar);
		}
		else
			count += _putchar(format[index]);
		index++;
	}
	va_end(nextVar);
	return (count);
}
/**
  * switch_help - helper function for switch
  * @character: %_ where underscore is d, i, ... etc
  * @nextVar: next Variable
  * Return: count
  */

int switch_help(char character, va_list nextVar)
{
	int count = 0;

	switch (character)
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
		case ('%'):
			count += _putchar('%');
			break;
		default:
			count += _putchar('%');
			count += _putchar(character);
	}
	return (count);
}
