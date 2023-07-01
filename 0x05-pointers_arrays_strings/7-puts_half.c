#include <stdio.h>
/**
 * puts_half - Prints the second half of a string.
 *
 * @str: The string.
 */
void puts_half(char *str)
{
int length = 0;
int i, start;
/* Calculate the length of the string*/
while (str[length] != '\0')
length++;
/* Determine the starting index for printing*/
start = (length + 1) / 2;
/* Print the second half of the string */
for (i = start; str[i] != '\0'; i++)
putchar(str[i]);
putchar('\n');
}
