/* print_all.c */
#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_all(const char *format, ...)
{
    va_list args;
    va_start(args, format);

    int i = 0; /* Initialize 'i' at the declaration */
    char *str;
    int first = 1;

    while (format && format[i])
    {
        if (!first)
            printf(", ");

        switch (format[i])
        {
        case 'c':
            printf("%c", va_arg(args, int));
            break;
        case 'i':
            printf("%d", va_arg(args, int));
            break;
        case 'f':
            printf("%f", va_arg(args, double));
            break;
        case 's':
            str = va_arg(args, char *);
            if (str == NULL)
                str = "(nil)";
            printf("%s", str);
            break;
        }

        first = 0;
        i++;
    }

    printf("\n");
    va_end(args);
}
