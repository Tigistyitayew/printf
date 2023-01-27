#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);


struct data_types
{
	char *x;
	char *(*y)(va_list list);
};
typedef struct data_types flags;
int get_position(const char *s, int n);
int _strlen(char *s);
char *_strcat(char *dest, char *src, int n);
char *_strcpy(char *dest, char *src);
char *print_c(va_list list);
char *print_s(va_list list);
char *print_i(va_list list);
void *reverse_string(char *s);
char *print_b(va_list list);
char *print_d(va_list list);

char *print_p(va_list list);
char *print_u(va_list list);
char *print_o(va_list list);
char *print_h(va_list list);
char *print_h_lower(va_list list);
char *print_r(va_list list);
int len(int n);

#endif
