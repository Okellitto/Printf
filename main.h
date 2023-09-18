#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
int _printf(const char *format, ...);

/**
 * struct print_function - A structure for print functions.
 * @specifier: The format specifier.
 * @func: A pointer to the corresponding print function.
 */
typedef struct print_function
{
    char specifier;
    int (*func)(va_list);
} print_function_t;

int _printf(const char *format, ...);

int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);

#endif
