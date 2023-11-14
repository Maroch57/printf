#include "main.h"
/**
 * get_flags - function that checks specified flags
 * @a: flag to set
 * @flg: pointer to flag
 *
 * Return: 1 if flag is set, 0 elsewhere
 */
int get_flags(char a, flags_t *flg)
{
	switch (a)

	{
		case '+':
			flg->plus = 1;
			return (1);
		case '-':
			flg->minus = 1;
			return (1);
		case '0':
			flg->zero = 1;
			return (1);
		case ' ':
			flg->space = 1;
			return (1);
		case '#':
			flg->hash = 1;
			return (1);
		default:
			return (0);
	}
}

