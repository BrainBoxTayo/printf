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
