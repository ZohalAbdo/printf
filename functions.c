#include "main.h"
/**
 * strlen - function that count lenght of a string.
 *@s: string
 *Return:int
 */
int strlen(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)

		return (i);
}
/**
 * pr_char - function to write character
 *@arg: argument
 *Return:write
 */
int pr_char(va_list arg)
{
	char c;
	char buffer[1];

	c = va_arg(arg, int);
	buffer[0] = c;
	return (write(1, buffer, 1));
}
/**
 * pr_string - function to write string
 *@arg: argument
 *Return:write
 */
int pr_string(va_list arg)
{
	const char *s;

	s = va_arg(arg, const char *);
	return (write(1, s, strlen(s)));
}
