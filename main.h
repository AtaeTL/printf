#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
/**
* struct structprint - structure containing
* @q: the location and method to translate data to characters.
* @u: print function for specific type.
* Return: int
*/
#ifndef MAIN_H
#define MAIN_H
int _putchar(char c);
int _printf(const char *format, ...);
typedef struct structprint
{
char *q;
int (*u)(char *format, va_list);
} structype;
#endif
