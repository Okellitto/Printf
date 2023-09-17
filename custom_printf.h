#ifndef CUSTOM_PRINTF_H
#define CUSTOM_PRINTF_H

#include <stdarg.h>

int _printf(const char *format, ...); // Updated prototype

typedef int (*print_function)(va_list);

int my_putchar(char c);

int print_char(int character);
int print_string(char *str);
int print_percent();
int print_unknown();

print_function picker(char ch);

#endif /* CUSTOM_PRINTF_H */
