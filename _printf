#include "main.h"
#include <stdio.h>
#include <stdarg.h> // allows functions to accept an indefinite number of arguments.
/**
  * _printf - prints objects
  * @format: type
  * Return: 0
 */
int _printf(const char *format, ...) {
    va_list args;
    va_start(args, format); //enables access to the variable arguments
    int count = 0; // To keep track of characters printed
    while (*format) {
        if (*format == '%') {
            format++; // Move past '%'
            switch (*format) { // executes statements after the first case clause with a matching value, until a break statement is encountered
                case 'c':
                    putchar(va_arg(args, int));
                    count++;
                    break;
                case 's':
                    {
                        const char *str = va_arg(args, const char *);
                        while (*str) {
                            putchar(*str);
                            str++;
                            count++;
                        }
                    }
                    break;
                case '%':
                    putchar('%');
                    count++;
                    break;
                default: // Handle unsupported format specifier
                    putchar('?');
                    count++;
                    break;
            }
        } else {
            putchar(*format);
            count++;
        }
        format++; // Move to the next character in the format string
    }
    va_end(args); // performs cleanup for an ap object initialized by a call to va_start
    return count;
}
