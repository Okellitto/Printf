#include "main.h"

/*
 * _printf - produces output
 * @format: format
 * Return: value
 */

int _printf(const char *format, ...)
{
	int printed_characters;
	convert funct_list[] = {
		{"%", p_percent},
		{"c", p_character},
		{"s", p_string},
		{"d", p_interger},
		{NULL,NULL}
	};

	va_list args;
	
	if (format == NULL)
		return (-1);

	va_start(args, format);

<<<<<<< HEAD
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
	default:
	putchar('?');
	count++;
	break;
	}
	
	else
	{
		putchar(*format);
		count++;
		format++;
	}
		va_end(args);
	return (count);
=======
	printed_characters = parser(format, function_list, args);
	va_end(args);

	return (printed_characters);
>>>>>>> cbef9b578ec6d0a5fb405a3f34f8ed0221af398d
}
