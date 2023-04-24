#include"main.h"
/**
 * print_number_bin - prints a decimal integer in binary
 * @nextVar: the va_list containing the next argument
 * Return: the number of characters printed
 */
int print_number_bin(va_list nextVar)
{
	unsigned int num = va_arg(nextVar, unsigned int);
	int *arrstore;
	int count = 0, i;

	arrstore = malloc(32 * sizeof(int));
	if (arrstore == NULL)
		exit(1);
	for (i = 0; i < 32; i++)
	{
		if (num == 0)
		{
			--i;
			break;
		}
		arrstore[i] = (num % 2);
		num = (num / 2);
		if (i == 31)
			break;
	}
	for (; i >= 0; i--)
	{
		count += _putchar(arrstore[i] + '0');
	}
	free(arrstore);
	return (count);
}

/**
 * print_unsigned_number - prints a decimal integer
 * @nextVar: the va_list containing the next argument
 * Return: the number of characters printed
 */
int print_unsigned_number(va_list nextVar)
{
	unsigned int num = va_arg(nextVar, unsigned int);
	int count = count_digits(num);

	print_ui_recursive(num);
	return (count);
}
/**
 * print_ui_recursive - recursively prints a decimal integer
 * @num: the integer to print
 * Return: void
 */
void print_ui_recursive(unsigned int num)
{
	if (num / 10)
	{
		print_ui_recursive(num / 10);
	}
	_putchar(num % 10 + '0');
}
/**
 * print_number_oct - prints a decimal integer in binary
 * @nextVar: the va_list containing the next argument
 * Return: the number of characters printed
 */
int print_number_oct(va_list nextVar)
{
	unsigned int num = va_arg(nextVar, unsigned int);
	int *arrstore;
	int count = 0, i;

	arrstore = malloc(11 * sizeof(int));
	if (arrstore == NULL)
		exit(1);
	for (i = 0; i < 11; i++)
	{
		if (num == 0)
		{
			i--;
			break;
		}
		arrstore[i] = (num % 8);
		num = (num / 8);
		if (i == 10)
			break;
	}
	for (; i >= 0; i--)
	{
		count += _putchar(arrstore[i] + '0');
	}
	free(arrstore);
	return (count);
}
