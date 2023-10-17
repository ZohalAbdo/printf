#include "main.h"
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
		else if (x % 2)
		{
			s[i] = 0;
		}
		else if (!(x % 2))
		{
			s[i] = 1;
		}
		i++;
	}
	rev_string(s);
	return (write(1, s, _strlen(s)));
}
