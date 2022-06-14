#include "sort.h"

/**
 * insertion_sort_list - sort using the insertion algorithm
 * @list: pointer to the list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *tmp = NULL, *mark = NULL;

	if ((*list)->next == NULL || list == NULL || (*list) == NULL)
		return;

	tmp = *list;
	mark = *list;

	while (mark != NULL)
	{
		mark = mark->next;
		while (tmp->prev && (tmp->n < tmp->prev->n))
		{
			tmp->prev->next = tmp->next;
			if (tmp->next != NULL)
			{
				tmp->next->prev = tmp->prev;
			}
				tmp->next = tmp->prev;
				tmp->prev = tmp->next->prev;
			if (tmp->prev != NULL)
			{
				tmp->prev->next = tmp;
			}
			else
			{
				*list = tmp;
			}
			tmp->next->prev = tmp;
			print_list(*list);
		}
		tmp = mark;
	}
}
