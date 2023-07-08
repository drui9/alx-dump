#include "sort.h"

/**
 * swap_nodes - Swap two nodes in a listint_t doubly-linked list.
 * @h: A pointer to the head of the doubly-linked list.
 * @ptr1: A pointer to the first node to swap.
 * @ptr2: The second node to swap.
 */
void swap_nodes(listint_t **h, listint_t **ptr1, listint_t *ptr2)
{
	(*ptr1)->next = ptr2->next;
	if (ptr2->next != NULL)
		ptr2->next->prev = *ptr1;
	ptr2->prev = (*ptr1)->prev;
	ptr2->next = *ptr1;
	if ((*ptr1)->prev != NULL)
		(*ptr1)->prev->next = ptr2;
	else
		*h = ptr2;
	(*ptr1)->prev = ptr2;
	*ptr1 = ptr2->prev;
}

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 *                       using the insertion sort algorithm.
 * @list: A pointer to the head of a doubly-linked list of integers.
 *
 * Description: Prints the list after each swap.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *iter, *insert, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (iter = (*list)->next; iter != NULL; iter = tmp)
	{
		tmp = iter->next;
		insert = iter->prev;
		while (insert != NULL && iter->n < insert->n)
		{
			swap_nodes(list, &insert, iter);
			print_list((const listint_t *)*list);
		}
	}
}

