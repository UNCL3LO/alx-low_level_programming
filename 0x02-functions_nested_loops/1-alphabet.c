#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - Prints the alphabet in lowercase followed by a new line
 */
int _putchar(char c)
{
return write(1, &c, 1);
}
void print_alphabet(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
int main(void)
{
print_alphabet();
return 0;
}
