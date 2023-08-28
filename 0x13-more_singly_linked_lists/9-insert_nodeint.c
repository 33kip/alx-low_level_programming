#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Double pointer to the head of the list.
 * @idx: Index of the list where the new node should be added.
 * @n: Value to assign to the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 * If it is not possible to add the new node at index idx, do not add
 * the new node and return NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
 unsigned int i = 0;
    listint_t *new_node, *current;

    if (head == NULL)
        return NULL;

    if (idx == 0)
        return add_nodeint(head, n);

    current = *head;
    while (current != NULL && i < idx - 1)
    {
        current = current->next;
        i++;
    }

    if (current == NULL || i != idx - 1)
        return NULL;

    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return NULL;

    new_node->n = n;
    new_node->next = current->next;
    current->next = new_node;

    return new_node;
}
