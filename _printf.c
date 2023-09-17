#include "main.h"
/**
 * _printf - Custom printf function
 * @format: The format string
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
    int count = 0;
    int i = 0;
    char spec;
    va_list ap;

    if (format == NULL)
    {
        return (-1);
    }

    va_start(ap, format);

    while (format[i] != '\0')
    {
        if (format[i] != '%')
        {
            /* Handle regular characters */
            putchar(format[i]);
            count++;
        }
        else
        {
            int (*print_function)(va_list);

            i++;
            spec = format[i];
            if (spec != '\0')
            {
                va_list ap_copy;
                va_copy(ap_copy, ap);

                /* Handle format specifiers */
                switch (spec)
                {
                    case 'c':
                        print_function = print_char;
                        break;
                    case 's':
                        print_function = print_string;
                        break;
                    case '%':
                        print_function = print_percent;
                        break;
                    case 'r':
                        print_function = print_custom_r;
                        break;
                    default:
                        print_function = NULL;
                }

                if (print_function != NULL)
                {
                    count += print_function(ap_copy);
                }
            }
        }
        i++;
    }

    va_end(ap);
    return (count);
}
