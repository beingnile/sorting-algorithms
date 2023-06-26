#include "sort.h"

/**
 * insertion_sort_list - Implements insertion sort algorithm
 * on a doubly linked list.
 *
 * @list - Pointer to a pointer to the doubly linked list
 */
void insertion_sort_list(listint **list)
{
	int x;

	while(list)
	{
		if (list->next->n < list->n)
		{
			temp = list;
			list->prev->next = list->next;
			list->next->next = temp; /*Does this swap make sense???*/

			while(list->prev)
			{
				if (list->prev->n > /*Okay, how do I refer to the node to move???*/)
				{
					/* Move node till node->n > node->next->n */
					/* Print the list */
				}
			}
		}
		list = list->next;
	}
}
