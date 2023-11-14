#ifndef PRINTF_H
#define PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

int print_chr(va_list v);
int print_str(va_list v);
int _strlen(char *s);
int _strlenc(const char *s),
int print_perc(void);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
