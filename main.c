#include<stdio.h>
#include"main.h"
int main()
{
	char *str = "temitayo";
	char alpha = 'c';
	int number = 10;
	int number2 = 0x32;
	int storeNum = _printf("This is a %s, %c, %d, %i\n", str, alpha, number, number2);
	//printf("This is a %s, %c, %d, %i\n", str, alpha, number, number2);
	
	_printf("%d\n", storeNum);
	
}
