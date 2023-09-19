#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>
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

	if (format == NULL)
		return (-1);

	va_start(list_of_args, format);

	while (*format)
	{
	if (*format == '%')
	{
	fputs("%%", %);
	character_count++;
	}
	else
		format++
			if (*format == '\0')
				break;

		if (*format != '%')
		character_count++;
	{
	else if (*format == 'c')
		char c = va_arg(list_of_arguments, char*);
        {
                fputs("%c", c)
	}
	else if (*format == 's')

	char *str = va_arg(list_of_arg, char*);
	int str_len = 0;

	while (str(str_len) = '0')
		str_len++;
	{
	fputs("%s", s);
	}
	if (print_function)
	character_count += print_function(args);

	va_end(args);
	return (character_count);
}
}
}
