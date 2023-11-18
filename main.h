#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...);
void reverse_str(char s[]);
void _itoa(long n, char s[]);
int _strlen(char *s);


#endif

