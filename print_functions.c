#include "main.h"
#include <stdio.h>

/**
 * print_char - Print a character.
 * @args: Arguments list.
 * Return: Number of characters printed.
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	putchar(c);
	return (1);
}
/**
 * print_string - Print a string.
 * @args: Arguments list.
 * Return: Number of characters printed.
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	while (*str)
{
	putchar(*str);
	str++;
	count++;
}
	return (count);
}
/**
 * print_percent - Print a percent sign.
 * @args: Arguments list.
 * Return: Number of characters printed.
 */
int print_percent(va_list args)
{
	(void)args;
	putchar('%');
	return (1);
}
