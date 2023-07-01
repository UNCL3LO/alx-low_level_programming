#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
srand(time(NULL)); /* Initialize the random number generator with the current time */
char password[7]; /* Assume password length is 6 characters */
for (int i = 0; i < 6; i++)
{
/* Generate a random character within the ASCII range of printable characters */
password[i] = rand() % 94 + 33;
}
password[6] = '\0'; /* Null-terminate the password string */
printf("%s\n", password); /* Print the generated password */
return (0);
}
