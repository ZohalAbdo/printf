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
/**
 *pr_binary - function converted unsigned int to binary
 *@arg: argument
 *Return:int
 */
int pr_binary(va_list arg)
{
	unsigned int x;
	char buffer[BUFFER];
	char *s;
	unsigned int i;

	x = va_arg(arg, int);
	if (x == 0)
		return (write(1, &x, 1));
	for (i = 0; x > 0; x = x / 2)
	{
		if (x % 2)
		{
			buffer[i++] = 0;
		}
		else if (!(x % 2))
		{
			buffer[i++] = 1;
		}
	}
	buffer[0] = '\0';
	rev_string(buffer);
	s = buffer;
	return (write(1, s, _strlen(s)));
}
/**
 *pr_int - function that print integer
 *@arg: argument
 *Return:int
 */
int pr_int(va_list arg)
{
	int num = va_arg(arg, int);
	char buffer[BUFFER];
	int i = 0;
	int salib = 0;
	int X;
	char *buffer1;

	if (num == 0)
	{
		buffer[i++] = '0';
	}
	else
	{
		if (num < 0)
		{
			salib = 1;
			num = -num;
		}

		while (num != 0)
		{
			X = num % 10;
			buffer[i++] = X + '0';
			num = num / 10;
		}

		if (salib)
		{
			buffer[i++] = '-';
		}
	}
	buffer[0] = '\0';
	rev_string(buffer);
	buffer1 = buffer;
	return (write(1, buffer1, _strlen(buffer1)));
}
/**
 *pr_rev_string1 - reverses a string
 *@arg: string to be reversed
 *Return:int
 */
int pr_rev_string1(va_list arg)
{
	char tmp;
	int i, len, len1;
	char *s = va_arg(arg, char *);

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
	return (len - 1);
}
