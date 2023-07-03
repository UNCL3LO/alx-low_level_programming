#include <stddef.h>

/**
 * leet - Encodes a string into 1337
 * @str: Pointer to the string
 *
 * Return: Pointer to the modified string
 */
char *leet(char *str)
{
char *ptr = str;
char leet_map[] = "AEOTL";
char leet_nums[] = "43071";
int i, j;
while (*ptr != '\0')
{
i = 0;
while (leet_map[i] != '\0')
{
if (*ptr == leet_map[i] || *ptr == leet_map[i] + 32)
{
*ptr = leet_nums[i];
break;
}
i++;
}
ptr++;
}
return str;
}
