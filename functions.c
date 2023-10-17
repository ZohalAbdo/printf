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
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char tmp;
	int i, len, len1;

	len = 0;
	len1 = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	len1 = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len1];
		s[len1--] = tmp;
	}
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
/*
 * pr_binary - function converted unsigned int to binary
 *@arg: argument
 *Return:int
 */
int pr_binary(va_list arg)
{
	unsigned int x;
	char *s;
	unsigned int i;

	x = arg;
	for (i = 0, x >= 0, x = x / 2)
	{
		if (x == 0)
			write(1, &x, 1);
		return (1);
		else if(x % 2)
		{
			s[i] = 0;
		}
		else if(!(x % 2))
		{
			s[i] = 1;
		}
		i++;
	}
	rev_string(s);
	return (write(1, s, _strlen(s)));
}
