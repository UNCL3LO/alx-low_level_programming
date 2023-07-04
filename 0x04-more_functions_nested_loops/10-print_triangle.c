#include "main.h"

/**
 * print_triangle - Prints a triangle of a given size
 * @size: The size of the triangle
 *
 * Description:
 * Prints a triangle made of '#' characters to the standard output,
 * followed by a new line. The triangle's size is determined by the
 * value of the 'size' parameter.
 * If 'size' is 0 or less, only a new line is printed.
 */
void print_triangle(int size)
{
int i, j;
if (size <= 0)
{
_putchar('\n');
return;
}
for (i = 1; i <= size; i++)
{
for (j = 1; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
