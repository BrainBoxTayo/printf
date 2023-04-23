#include"main.h"
#include<stdio.h>

int main(__attribute__((unused))int argc, __attribute__((unused))char **argv)
{
	int length;
	length = _printf("% ");

	_printf("%d", length);
	return 0;
}
