#include "main.h"
/**
 * print_string - prints a string
 * @nextVar: the va_list containing the next argument
 * Return: the number of characters printed
 */
int print_string(va_list nextVar)
{
	char *str;
	int count = 0, size_str;

	str = va_arg(nextVar, char *);
	if (str == NULL)
	{
		str = "(null)";
	}
	for (size_str = 0; str[size_str]; size_str++)
	{
		count += _putchar(str[size_str]);
	}
	return (count);
}

/**
 * print_char - prints a single character
 * @nextVar: the va_list containing the next argument
 * Return: the number of characters printed
 */
int print_char(va_list nextVar)
{
	int count = 0;

	count += _putchar(va_arg(nextVar, int));
	return (count);
}

/**
 * print_number - prints a decimal integer
 * @nextVar: the va_list containing the next argument
 * Return: the number of characters printed
 */
int print_number(va_list nextVar)
{
	int num = va_arg(nextVar, int);
	int count = count_digits(num);

	if (num < 0)
		count += 1;
	print_num_recursive(num);
	return (count);
}
/**
 * count_digits - counts the number of digits in an integer
 * @num: the integer to count digits for
 * Return: the number of digits in the integer
 */
int count_digits(int num)
{
	int count = 0;

	while (num != 0)
	{
		count++;
		num /= 10;
	}
	if (num < 0)
		count += 1;
	return (count);
}
/**
 * print_num_recursive - recursively prints a decimal integer
 * @num: the integer to print
 * Return: void
 */
void print_num_recursive(int num)
{
	if (num < 0)
	{
		num = -num;
		_putchar('-');
	}
	if (num / 10)
	{
		print_num_recursive(num / 10);
	}
	_putchar(num % 10 + '0');
}

