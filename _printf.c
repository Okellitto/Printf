#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - Print a character and update the count
 * @args: Argument list
 * @count: Pointer to the character count
 */
static void print_char(va_list args, int *count)
{
	char c = va_arg(args, int);
	putchar(c);
	(*count)++;
}

/**
 * print_string - Print a string and update the count
 * @args: Argument list
 * @count: Pointer to the character count
 */
static void print_string(va_list args, int *count)
{
	const char *str = va_arg(args, const char *);
	while (*str)
	{
		putchar(*str);
		str++;
		(*count)++;
	}
}

/**
 * _printf - Print formatted text
 * @format: Format string
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);
	int count = 0;

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					print_char(args, &count);
					break;
				case 's':
					print_string(args, &count);
					break;
				case '%':
					putchar('%');
					count++;
					break;
				case 'r':
					putchar('%');
					putchar('r');
					count += 2;
					break;
				default:
					putchar('?');
					count++;
					break;
			}
		}
		else
		{
			putchar(*format);
			count++;
		}
		format++;
	}

	va_end(args);
	return (count);
}
