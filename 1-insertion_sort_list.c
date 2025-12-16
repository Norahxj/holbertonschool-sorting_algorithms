#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list in ascending order
 * @list: Pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp;

	if (!list || !*list || !(*list)->next)
		return;

	current = (*list)->next;
	while (current)
	{
		temp = current;
		while (temp->prev && temp->n < temp->prev->n)
		{
			if (temp->prev->prev)
				temp->prev->prev->next = temp;
			if (temp->next)
				temp->next->prev = temp->prev;

			temp->prev->next = temp->next;
			temp->next = temp->prev;
			temp->prev->next->prev = temp;
			temp->prev->prev = temp;

			if (!temp->prev->prev)
				*list = temp;

			print_list(*list);
		}
		current = current->next;
	}
}
