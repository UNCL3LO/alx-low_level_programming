#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
print_fibonacci_numbers(50);
puts("");
return 0;
}
/**
 * print_fibonacci_numbers - Prints the first n Fibonacci numbers
 * @n: The number of Fibonacci numbers to print
 */
void print_fibonacci_numbers(int n)
{
int i;
long fib1 = 1, fib2 = 2, fib;
if (n > 0)
printf("%ld", fib1);
for (i = 1; i < n; i++)
{
printf(", %ld", fib2);
fib = fib1 + fib2;
fib1 = fib2;
fib2 = fib;
}
}
