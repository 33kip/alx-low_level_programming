#include "main.h"

/**
* _strstr - Locates a substring.
* @haystack: The string to search within.
* @needle: The substring to find.
*
* Return: A pointer to the beginning of the located substring,
*         or NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
if (haystack == NULL || needle == NULL)
return (NULL);
while (*haystack != '\0')
{
char *haystack_ptr = haystack;
char *needle_ptr = needle;
while (*haystack_ptr == *needle_ptr && *needle_ptr != '\0')
{
haystack_ptr++;
needle_ptr++;
}
if (*needle_ptr == '\0')
return (haystack);
haystack++;
}
return (NULL);
}
