#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints the lowercase
 * alphabet followed by a newline character
 *Only the `putchar` function is allowed to be used
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter;
for (letter= 'a'; letter <= 'z'; letter++)
putchar(letter);
putchar('\n');
return (0);
}
