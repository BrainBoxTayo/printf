#include"main.h"
/**
  * print_HEX_int - print numbers in hexadecimal uppercase
  * @nextVar: va_list
  * Return: count of characters
  */
int print_HEX_int(va_list nextVar)
{
	unsigned int num = va_arg(nextVar, unsigned int);
	int *arrstore;
	/*this array holds A-F just add to 0*/
	int hextonum[6] = {17, 18, 19, 20, 21, 22};
	int count = 0, i;

	arrstore = malloc(8 * sizeof(int));
	if (arrstore == NULL)
		exit(1);
	for (i = 0; i < 8; i++)
	{
		if (num == 0)
		{
			i--;
			break;
		}
		arrstore[i] = (num % 16);
		if (arrstore[i] > 9)
		{
			arrstore[i] = hextonum[arrstore[i] - 10];
		}
		num = (num / 16);
		if (i == 7)
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
  * print_hex_int - print numbers in hexadecimal lowercase
  * @nextVar: va_list
  * Return: count of characters
  */
int print_hex_int(va_list nextVar)
{
	unsigned int num = va_arg(nextVar, unsigned int);
	int *arrstore;
	/*this array holds a-f just add to 0*/
	int hextonum[6] = {49, 50, 51, 52, 53, 54};
	int count = 0, i;

	arrstore = malloc(8 * sizeof(int));
	if (arrstore == NULL)
		exit(1);
	for (i = 0; i < 8; i++)
	{
		if (num == 0)
		{
			i--;
			break;
		}
		arrstore[i] = (num % 16);
		if (arrstore[i] > 9)
		{
			arrstore[i] = hextonum[arrstore[i] - 10];
		}
		num = (num / 16);
		if (i == 7)
			break;
	}
	for (; i >= 0; i--)
	{
		count += _putchar(arrstore[i] + '0');
	}
	free(arrstore);
	return (count);
}
