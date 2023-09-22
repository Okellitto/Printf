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

	printed_characters = parser(format, function_list, args);
	va_end(args);

	return (printed_characters);
}
