#include <stddef.h>

/**
 * rot13 - Encodes a string using ROT13 cipher
 * @str: Pointer to the string
 *
 * Return: Pointer to the modified string
 */
char *rot13(char *str)
{
char *ptr = str;
char *rot_table = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int i;
while (*ptr != '\0')
{
i = 0;
while (rot_table[i] != '\0')
{
if (*ptr == rot_table[i])
{
*ptr = rot_table[i - 13];
break;
}
i++;
}
ptr++;
}
return str;
}
