#include "main.h"

/**
 * print_char - Print a character and update the count
 * @ap: Argument list
 * Return: Number of characters printed
 */
int print_char(va_list ap)
{
    char c = va_arg(ap, int);
    putchar(c);
    return 1;
}

/**
 * print_string - Print a string and update the count
 * @ap: Argument list
 * Return: Number of characters printed
 */
int print_string(va_list ap)
{
    const char *str = va_arg(ap, const char *);
    int count = 0;
    while (*str)
    {
        putchar(*str);
        str++;
        count++;
    }
    return count;
}

/**
 * print_percent - Print a '%' character and update the count
 * @ap: Argument list
 * Return: Number of characters printed
 */
int print_percent(va_list ap)
{
    putchar('%');
    return 1;
}

/**
 * print_custom_r - Print a custom format specifier '%r' and update the count
 * @ap: Argument list
 * Return: Number of characters printed
 */
int print_custom_r(va_list ap)
{
    putchar('%');
    putchar('r');
    return 2;
}
