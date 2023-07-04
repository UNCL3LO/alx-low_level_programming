#include "main.h"
#include <stdio.h>
/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
    int divisor = 1;
    int digit, i;
if (n < 0) {
_putchar('-');
n = -n;
}
while (n / divisor >= 10)
divisor *= 10;
while (divisor > 0) {
digit = (n / divisor) % 10;
_putchar(digit + '0');
divisor /= 10;
}
}
