#include <stdio.h>

/**
 * largestPrimeFactor - Finds the largest prime factor of a given number.
 * @n: The number to find the largest prime factor for.
 *
 * Return: The largest prime factor of the given number.
 */
long long largestPrimeFactor(long long n)
{
long long largestFactor = -1;
while (n % 2 == 0)
{
largestFactor = 2;
n /= 2;
}
for (long long i = 3; i * i <= n; i += 2)
{
while (n % i == 0)
{
largestFactor = i;
n /= i;
}
}
if (n > 2)
{
largestFactor = n;
}
return (largestFactor);
}
