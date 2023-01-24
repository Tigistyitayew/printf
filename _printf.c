#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
/**
 * _printf - produces output according to a format
 * @format: character string
 * Return: the number of characters printed 
 */

int _printf(const char *format, ...)
{
	int i, j, len;
	char *buff, *s;
	va_list list;
	len = 0;
	print f_list[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"d", print_i},
		{"u", print_u},
		{"b", print_b},
		{"o", print_o},
		{"r", print_r},
		{"X", print_h},
		{"x", print_h_lower},
		{"R", rot13},
		{NULL, NULL}	
	};
	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		free(buff);
		return (-1);
	}
	va_start(list, format);
	if (format == NULL || list == NULL)
		return(-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] == '%')
			continue;
		else if (format[i] == '%')
		{
			if (format[i + 1] == ' ')
				i += get_position(format, i);
			for (j = 0; f_list[j].f != NULL; j++)
			{
				if (format[i + 1] == *(f_list[j].c))
				{
					s = f_list[j].f(list);
					if (s == NULL)
						return (-1);
					_strlen(s);
					_strcat(buff, s, len);
					len += _strlen(s);
					i++;
					break;
				}
			}
			if (f_list[j].f == NULL)
			{
				buff[len] = format[i];
				len++;
			}
		}
		else
		{
			buff[len] = format[i];
			len++;
		}
	}
	buff[len] = '\0';
	write(1, buff, len);
	va_end(list);
	free(buff);
	return (len);
}
