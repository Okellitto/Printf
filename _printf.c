#include "main.h"
#include <stdio.h>

/**
 * _printf - Prints formatted output to stdout.
 * @format: A pointer to the format string.
 *
 * Return: The number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
	int character_count = 0;
	va_list args;
	va_start(args, format);
	
	while (*format)
	{
	if (*format == '%')
	{
	format++;
	if (*format)
	{
	char specifier = *format;
	int (*print_function)(va_list) = get_print_function(specifier);
	if (print_function)
	character_count += print_function(args);
	else
	{
	putchar('?'); // Handle unknown format specifier with '?'
	character_count++;
	}
	}
	}
	else
	{
	putchar(*format);
	character_count++;
	}
	format++;
	}
	va_end(args);
	return character_count;
}
