#include "main.h"
/**
 * _strlen - function that count lenght of a string.
 *@s: string
 *Return:int
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{

	}
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
	char buffer[2];

	c = va_arg(arg, int);
	buffer[0] = c;
	buffer[1] = '\0';
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
	if (s == NULL)
	{
		s = "(null)";
	}
	return (write(1, s, _strlen(s)));
}
/**
 * pr_unknown - Unknown conversion specifier
 *@arg: void
 *Return:int
 */
int pr_unknown(va_list arg)
{
	(void)arg;
	return (write(1, "Unknown conversion specifier", 27));
}
