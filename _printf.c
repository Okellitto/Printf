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
			switch (*format)
			{
			case 'c':
				putchar(va_arg(args, int));
				character_count++;
				break;
			case 's':
			{
				char *str = va_arg(args, char *);
				while (*str)
				{
					putchar(*str);
					str++;
					character_count++;
				}
			}
				break;
			case '%':
				putchar('%');
				character_count++;
				break;
			default:
				putchar('?');
				character_count++;
				break;
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
	return (character_count);
}
