#include "sort.h"

/**
 * insertion_sort_list - Implements insertion sort algorithm
 * on a doubly linked list.
 *
 * @list: Pointer to a pointer to the doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *current;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;

	while(current)
	{
		while (current->prev && current->n < current->prev->n)
		{
			temp = current->prev;
			temp->next = current->next;

			if (current->next)
				current->next->prev = temp;

			current->prev = temp->prev;
			current->next = temp;

			if (temp->prev)
				temp->prev->next = current;
			else
				*list = current;

			temp->prev = current;

			print_list(*list);
		}
		current = current->next;
	}
}
