#include "main.h"

/**
* set_string - Sets the value of a pointer to a char.
* @s: Double pointer to the original string pointer.
* @to: Pointer to the new string to be set.
*/
void set_string(char **s, char *to)
{
*s = to;
}
