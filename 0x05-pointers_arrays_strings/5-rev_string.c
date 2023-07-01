#include "main.h"
/**
* rev_string - Reverses a string.
* @s: The string to be reversed.
* Return: void.
*/
void rev_string(char *s)
{
int length = 0;
int start = 0;
int end = 0;
char temp;
/* Calculate the length of the string */
while (s[length] != '\0')
length++;
/* Reverse the string using two pointers */
start = 0;          /* Start pointer at the beginning */
end = length - 1;   /* End pointer at the end */
while (start < end)
{
/* Swap characters at start and end positions */
temp = s[start];
s[start] = s[end];
s[end] = temp;
/* Move start pointer forward */
start++;
/* Move end pointer backward */
end--;
}
}
