#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: pointer to list of integers
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current_node, *n_node, *next_node;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	next_node = (*list)->next;
	while (next_node != NULL)
	{
		current_node = next_node->prev;
		n_node = next_node;
		while (current_node != NULL && n_node->n < current_node->n)
		{
			if (current_node->prev != NULL)
				current_node->prev->next = n_node;
			if (n_node->next != NULL)
				n_node->next->prev = current_node;
			current_node->next = n_node->next;
			n_node->prev = current_node->prev;
			n_node->next = current_node;
			current_node->prev = n_node;
			if (n_node->prev == NULL)
				*list = n_node;
			print_list(*list);
			current_node = n_node->prev;
		}
		next_node = next_node->next;
	}
}
