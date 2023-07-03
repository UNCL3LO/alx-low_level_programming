#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
int divisor = 1;
int num_digits = 0;
int i;
int digit;
if (n < 0) {
_putchar('-');
n *= -1;
}
while (n / divisor > 9) {
divisor *= 10;
num_digits++;
}
for (i = num_digits; i >= 0; i--) {
digit = (n / divisor) % 10;
_putchar('0' + digit);
divisor /= 10;
}
}
