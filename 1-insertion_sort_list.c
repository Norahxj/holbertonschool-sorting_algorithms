#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list in ascending order
 * @list: Pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *next_node, *temp;

	if (!list || !*list || !(*list)->next)
		return;

	current = (*list)->next;

	while (current)
	{
		next_node = current->next;

		while (current->prev && current->n < current->prev->n)
		{
			temp = current->prev;

			if (temp->prev)
				temp->prev->next = current;
			current->prev = temp->prev;

			temp->next = current->next;
			if (current->next)
				current->next->prev = temp;

			current->next = temp;
			temp->prev = current;

			if (!current->prev)
				*list = current;

			print_list(*list);
		}

		current = next_node;
	}
}
