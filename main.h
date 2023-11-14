#ifndef _MAIN_H_
#define _MAIN_H_

#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>

#define NULL_STR "(null)"
#define FLAG_INIT {0,0,0,0,0}
#define MOD_INIT {0,0,0,0}
#define BUFFER_SIZE 1024

/**
 * struct flags - struct for flags
 * @plus: flag for '+' char
 * @minus: flag for '-' char
 * @zero: flag for '0' char
 * @space: flag for ' ' char
 * @hash: flag for '#' char
 *
 * flag struct is to store flags for specifiers/identifiers
 * flag set to 1 when used, otherwise 0.
 */

typedef struct flags
{
	int plus;
	int minus;
	int zero;
	int space;
	int hash;
} flags_t;

/**
 * struct modifiers - struct for modifiers
 * @len_l: length modifier for the 'l' char
 * @len_h: length modifier for the 'h' char
 * @wdth: min width to print
 * @prec: precision of number
 *
 * modifier struct to store all modifiers for the specifier
 * modifier set to 1 whenused, otherwise 0.
 */
typedef struct modifiers
{
	int len_l;
	int len_h;
	int wdth;
	int prec;
} mod_t;

/**
 * struct format - converter for printf
 * @ph: type char pointer of the specifier
 * @func: function for the conversion specifier
 *
 */

typedef struct format
{
	char *ph;
	int (*func)();
} convert;

int *_strcpy(char *dest, char *src);
int print_ptr(va_list v);
int print_unsigned(va_list list_args);
int print_addn_hex(unsigned long int numb);
int _strlenc(const char *s);
int print_addn_HEX(unsigned int numb);
int print_str_excl(va_list v);
int print_HEX(va_list v);
int print_hex(va_list v);
int print_oct(va_list v);
int print_bin(va_list v);
int print_str_rev(va_list list_args);
int print_str_encode(va_list list_args);
int print_int(va_list list_args);
int print_dec(va_list list_args);
int _strlen(char *s);
int rev_string(char *s);
int print_perc(void);
int print_chr(va_list v);
int print_str(va_list v);
int _putchar(char c);
int get_flags(char a, flags_t *flg);
int get_modifier(char c, mod_t *mod);
int _printf(const char *format, ...);

#endif

