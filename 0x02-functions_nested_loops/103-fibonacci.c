#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
long sum = 0;
long fib1 = 1, fib2 = 2, fib = 0;
while (fib2 <= 4000000)
{
if (fib2 % 2 == 0)
sum += fib2;
fib = fib1 + fib2;
fib1 = fib2;
fib2 = fib;
}
printf("%ld\n", sum);
return (0);
}
