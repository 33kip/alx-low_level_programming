#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: Pointer to a pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
size_t size = 0;
listint_t *current, *temp;
if (h == NULL || *h == NULL)
return (0);
current = *h;
while (current != NULL)
{
size++;
if (current->next >= current)
{
free(current);
break;
}
temp = current;
current = current->next;
free(temp);
}
*h = NULL;
return (size);
}
