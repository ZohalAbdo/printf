#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _strlen(const char *s);
int pr_char(va_list arg);
int pr_string(va_list arg);
int linker(const char *format, va_list arg, int i);
/**
 *struct pro - structure for link
 *@format: character
 *@function: function
 */
typedef struct pro
{
	char format;
	int (*function)(va_list arg);
} lk;
#endif
