#include <stdio.h>

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the result buffer.
 *
 * Return: A pointer to the result string.
 *         NULL if the result cannot fit in the buffer.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int carry = 0;
int len1 = 0, len2 = 0, i, j;
int digit1, digit2, sum;
/* Calculate the lengths of n1 and n2 */
while (n1[len1] != '\0')
len1++;
while (n2[len2] != '\0')
len2++;
/* Check if the result can fit in the buffer */
if (len1 >= size_r || len2 >= size_r)
return (0);
/* Add the digits from right to left */
for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry > 0; i--, j--)
{
digit1 = (i >= 0) ? (n1[i] - '0') : 0;
digit2 = (j >= 0) ? (n2[j] - '0') : 0;
sum = digit1 + digit2 + carry;
if (sum >= 10)
{
carry = 1;
sum -= 10;
}
else
{
carry = 0;
}
/* Store the digit in the result buffer */
if (size_r <= 1)
return (0);
r[size_r - 2] = sum + '0';
size_r--;
}
/* Null-terminate the result buffer */
r[size_r - 1] = '\0';
/* Shift the result to the beginning of the buffer if necessary */
if (size_r <= 1)
return (0);
if (size_r - 1 < len1 || size_r - 1 < len2)
{
i = size_r - 1;
while (i > 0)
{
r[i - 1] = r[i];
i--;
}
}
return (r);
}
