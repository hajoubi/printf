#include "main.h"
/**
 * _printf - this is a formatted output conversion and print data.
 * @format: input string.
 *
 * Return: number of chars printed.
 */
int _printf(const char *format, ...)
{

va_list ptr;
int s_len;
int c_len;
char *str;
if (format == NULL)
{
        return (-1);
}
va_start(ptr, format);
while (*format)
{
        if (*format != '%')
        {
                write(1, format, 1);
                c_len++;
        }

else
        {
                format++;
                if (*format == '\0')
                {
                        break;
                }
                if (*format == '%')
                {
                        write(1, format, 1);
                        c_len++;
                }
                else if (*format == 'c')
                {
                        char c = va_arg(ptr, int);
                        write(1, &c, 1);
                        c_len++;
                }
                else if (*format == 's')
                {
                        str = va_arg(ptr, char*);
                        s_len = 0;
                        while (str[s_len] != '\0')
                                s_len++;
                        write(1, str, s_len);
                        c_len += s_len;
                }
        }
        format++;                                                                                                                                                                                                                                                                                                            
}                                                                                                                                                                                                                                                                                                                            
va_end(ptr);                                                                                                                                                                                                                                                                                                                 
return (c_len);                                                                                                                                                                                                                                                                                                              
}     
 
