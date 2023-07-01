#include <stdio.h>
/**
 * _puts - Prints a string followed by a
 * new line to the standard output.
 *
 * @str: The string to be printed.
 */
void _puts(char *str)
{
while (*str != '\0')
{
fputc(*str, stdout);
str++;
}
fputc('\n', stdout);
}
