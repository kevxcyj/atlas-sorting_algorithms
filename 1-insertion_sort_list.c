#include "sort.h"
/**
 * insertion_sort_list - Sorts a doubly linked list in asc.
 * @list: list of numbers to sort
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *head = NULL;
	listint_t *swap = NULL;
	listint_t *t = NULL;

	if (*list == NULL || (*list)->next == NULL)
		return;

	head = *list;

	while (head != NULL)
	{
		t = head;
		while (t->prev != NULL && t->prev->n > t->n)
		{
			swap = t->prev;
			t->prev = swap->prev;
			swap->next = t->next;
			if (swap->prev != NULL)
				swap->prev->next = t;
			if (t->next != NULL)
				t->next->prev = swap;
			t->next = swap;
			swap->prev = t;
			if (head == t)
				head = swap;
			while ((*list)->prev != NULL)
				*list = (*list)->prev;
			print_list(*list);
		}
		head = head->next;
	}
}
