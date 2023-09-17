#include "custom_printf.h"
/**
 * _printf - Custom printf function
 * @format: The format string
 * Return: Number of characters printed
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
                    character_count += my_putchar(va_arg(args, int));
                    break;
                case 's':
                    {
                        char *str = va_arg(args, char *);
                        while (*str)
                        {
                            character_count += my_putchar(*str);
                            str++;
                        }
                    }
                    break;
                case '%':
                    character_count += my_putchar('%');
                    break;
                default:
                    character_count += my_putchar('?'); // Handle unknown format specifier with '?'
                    break;
            }
        }
        else
        {
            character_count += my_putchar(*format);
        }
        format++;
    }

    va_end(args);
    return character_count;
}
