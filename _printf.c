#include "main.h"
#include <stdio.h>
#include <stdarg.h>

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
	putchar(va_arg(args, int));
	count++;
	break;
	case 's':
	{
	const char *str = va_arg(args, const char *);

	while (*str)
	{
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
	default;
	putchar('?');
	count++;
	break;
	}
	}
	else {
	putchar(*format);
	count++;
        }
	format++;
    }
	va_end(args);
	return (count);
}
