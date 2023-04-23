#include"main.h"
#include<stdio.h>

int main(__attribute__((unused))int argc, __attribute__((unused))char **argv)
{
	int intVar = 0x123;
	char *stringVar = "String 0x123";

	_printf("This is an int %i and also %d % t\n", intVar, intVar);
	 printf("This is an int %i and also %d % t\n", intVar, intVar);

	_printf("This is a %s % t12\n", stringVar);
	 printf("This is a %s % t12\n", stringVar);
	
	return (argc);
}
