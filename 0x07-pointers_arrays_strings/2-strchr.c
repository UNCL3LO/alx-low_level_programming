#include <stdio.h>
/**
 * _strchr - Locates a character in a string
 * @s: The string to search in
 * @c: The character to locate
 *
 * Return: A pointer to the first occurrence of the character c in the string s,
 *         or NULL if the character is not found
 */
char *_strchr(char *s, char c);
int main(void)
{
char *s = "hello";
char *f;
f = _strchr(s, 'l');
if (f != NULL)
{
printf("%s\n", f);
}
return 0;
}
