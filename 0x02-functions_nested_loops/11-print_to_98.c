#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
while (1)
{
_putchar(n + '0');
if (n == 98)
break;
_putchar(',');
_putchar(' ');
if (n < 98)
n++;
else
n--;
}
_putchar('\n');
}
