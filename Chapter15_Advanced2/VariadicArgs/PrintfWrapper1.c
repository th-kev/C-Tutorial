#include <stdarg.h>
#include <stdio.h>

void my_printf(char *format, ...)
{
    va_list args;
    va_start(args, format);

    while(*format != '\0')
    {
        if (*format == '%')
        {
            ++format;
            if (*format == 'c')
            {
                char value = (char)va_arg(args, int);
                putchar(value);
            }
            else
            {
                putchar(*format);
            }

        }
        else
        {
            putchar(*format);
        }

        ++format;
    }



    va_end(args);
}

int main()
{

    printf("%c --- %c - %c\n", 'a', 'z', 'b');
    my_printf("%c --- %c - %c\n", 'a', 'z', 'b');

    return 0;
}
