#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The string to search in
 * @accept: The set of bytes to search for
 *
 * Return: A pointer to the byte in s that
 * matches one of the bytes in accept,
 *         or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
char *p = accept;
while (*p != '\0')
{
if (*s == *p)
{
return s;
}
p++;
}
s++;}
return (NULL);
}
