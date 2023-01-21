#include <stdio.h>
#include "main.h"
/**
* _printf - procedure
* @format: a string character 
* Return: the number of characters printed
*/
int _printf(char *format, ...)
{
int p = 0, (*structype)(char *, va_list);
char q[3];
va_list pa;
if (format == NULL)
return (-1);
q[2] = '\0';
va_start(pa, format);
_putchar(-1);
while (format[0])
{
if (format[0] == '%')
{
structype = driver(format);
if (structype)
{
q[0] = '%';
q[1] = format[1];
p += structype(q, pa);
}
else if (format[1] != '\0')
{
p += _putchar('%');
p += _putchar(format[1]);
}
else
{
p += _putchar('%');
break;
}
format += 2;
}
else
{
p += _putchar(format[0]);
format++;		
}
}
_putchar(-2);
return (p);
}
