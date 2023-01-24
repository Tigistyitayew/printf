#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);

typedef struct data_type
{
	char x;
	char* (*functn)(va_list);
}print;
int get_position(const char *s, int n);
int _strlen(char *s);
char *_strcat(char *dest, char *src, int n);

#endif
