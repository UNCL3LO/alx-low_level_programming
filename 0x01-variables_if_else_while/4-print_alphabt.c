#include <stdio.h>
/**
 * main - Entry point
 *Description: Prints the lowercase alphabet
 *excluding the letters 'q' and 'e',
 *followed by a newline character using the putchar function.
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'q' && letter != 'e')
{
putchar(letter);
}
}
putchar('\n');
return (0);
}
