#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - Prints the content of a buffer.
 * @b: The buffer to print.
 * @size: The number of bytes to print.
 */
void print_buffer(char *b, int size)
{
int i, j;
if (size <= 0)
{
printf("\n");
return;
}
for (i = 0; i < size; i += 10)
{
printf("%08x: ", i);
/* Print hexadecimal content */
for (j = i; j < i + 10; j++)
{
if (j < size)
printf("%02x ", b[j]);
else
printf("   ");
/* Add an extra space after the 5th byte */
if (j == i + 4)
printf(" ");
}
/* Print ASCII representation */
for (j = i; j < i + 10; j++)
{
if (j < size)
{
if (isprint(b[j]))
printf("%c", b[j]);
else
printf(".");
}
else
{
printf(" ");
}
}
printf("\n");
}
}
