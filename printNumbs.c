#include"main.h"
/**
  * print_number - prints a number
  * @n: number to be printed
  * Return: nothing
  */

int print_number(int n)
{
	int count = 0;
	unsigned int num = 0;

	if (n < 0)
	{
		_putchar(45);
		num = -n;
	}
	else
		num = n;
	/*remove last digit and recur - why I don't know yet*/
	/* I think I understand the recursion*/
	/*if the last digit is removed everytime the program*/
	/*does it again over and over until it reaches first digit*/
	if (num / 10)
		print_number(num / 10);
	/*print last digit*/
	_putchar((num % 10) + 48);
	count++;
	return (count);
}
