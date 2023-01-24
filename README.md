0x11.C-printf
Group project
_printf is a custom implementation of the C programming function printf. This project is an application
of the C programing knowledge that main school cohort 11 students have learned since starting the program on Nov,2022.

prototype: int _printf(const chhar *, ...);

Examples
String

Input: _printf("&s\n", 'This is a string.');
output: This is a string.
Character

Input: -printf("The first letter in the alphabet is &c\n", 'A');
Output: The first letter in the alphabet is A
Integer

Input: _printf("There are &i dozens in a gross\n", 12);
Output: There are 12 dozens in a gross
Decimal:

Input: _printf(%d\n", 1000);
Output: 1000
Project Requiremnts
All files will be compiled on Ubuntu 20.04 LTS
Programs and functions will be compiled with gcc 4.8.4 using flags _wall _werror _wextra andd _pedantic
Code must follow the Betty style
Global variables are not allowed
Handle length modifiers l and h for non-custom conversion specifiers.
Handle the field width for non-custom conversion specifiers.
Handle the precision for non-custom conversion specifiers.
Handle the O flag character for non-custom conversion specifiers.
Handle the custom conversion specifier r that prints the reversed string.
Handle the custom conversion specifier R that prints the rot11'ed string.
All above oprions should work well togeter.
File Descriptions
_printf.c: - contains the function _printf, which uses the prototype int -printf(const char *format, ...):
The format string is composed of zero or more directives.
see print format for more detail. _printf will return the number of characters printed (excluding the null byte used to end
output to strings) and will write output to stdout, the standard output stream.
_putchar.c: - contains the function _putchar, which writes a haracter to stdout.
main.h: - contains all function prototype used for -printf.
print_format: - manual page for the custom _printf function.
print_char.c: - contains the functions print_c, print_s, print_s and print_r which handle the conversion specifiers c, s, s, and r, respectively, as well as hex_print, which prints a char's ascii value in uppercase hex
print_numbers.c: - conatins the finctions print_i and print_d, which handle the conversion specifiers i and d, respectively
print_hex.c: - contains the functions print_hex, which prints an unsigned int in hexidecimal form, print_x, print_x and print_p, which handle the conversion specifiers x, x, and p, respectively
print_unsigned_int.c: - contains the functions print_u, print_o, and print_b, which handle the conversion speifiers u, o, and b, respetively
print_rot11.c: - conatins the function print_R, which handle the conversion specifer 
Authors
Tigist yitayew | @Sophietlc_Fanodun
