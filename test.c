#include "main.h"
/**
 * _printf - fun
 * @format: param
 * @...: param
 * Return: int
 */

int _printf(const char *format, ...)
{
    int i = 0;
    char l;
    char *ss;
    va_list arg;

    va_start(arg, format);
    while (format[i] != '\0')
    {
        if (format[i] == '%')
            if(format[i+1] == 'c')
            {
                l = va_arg(arg, int);
                write(1, &l, 1);
                i = i+1;
                if (format[i] == '\0')
                {
                    break;
                }
            }
            else if (format[i+1] == 's')
            {
            ss = va_arg(arg, char *);
            write(1, ss, strlen(ss));
            i = i+1;
            }
            else
            {
                write(1, &format[i], sizeof(char));
            }
        else
        {
            write(1, &format[i], sizeof(char));
        }
        i++;
    }
    va_end(arg);
    return (i);
}
