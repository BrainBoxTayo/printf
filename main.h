#ifndef MAIN_H
#define MAIN_H
#include<stdarg.h>
#include<stddef.h>
#include<stdlib.h>
int print_number_bin(va_list nextVar);
int switch_help(char character, va_list nextVar);
int _printf(const char *format, ...);
int _putchar(char c);
int print_string(va_list nextVar);
int print_char(va_list nextVar);
int print_number(va_list nextVar);
int count_digits(int num);
void print_num_recursive(int num);

#endif /*MAIN_H*/
