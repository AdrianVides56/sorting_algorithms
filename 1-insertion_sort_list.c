#include "sort.h"

/**
 * size_list - returns the size of the list
 * @list: list
 * Return: size
 */
int size_list(listint_t **list)
{
	int size = 0;
	listint_t *aux = NULL;

	for (aux = *list; aux != NULL; aux = aux->next)
		size++;

	return (size);
}
/**
 * swap_nodes - swap node1 and node2 places
 * @list: linked list
 * @node1: current node
 * @node2: next node to current
 */
void swap_nodes(listint_t **list, listint_t **node1, listint_t **node2)
{
	listint_t *aux = (*node1)->prev;

	(*node1)->next = (*node2)->next;

	if ((*node2)->next != NULL)
		(*node2)->next->prev = (*node1);
	(*node1)->prev = (*node2);
	(*node2)->next = (*node1);
	(*node2)->prev = aux;
	if ((*node2)->prev != NULL)
		(*node2)->prev->next = (*node2);
	else
		(*list) = (*node2);
}

/**
 * insertion_sort_list - sorts a doubly linked list
 * using the insertion sort algorithm
 * @list: list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp = NULL, *current = *list;
	int size = size_list(list);

	if (!(*list) || !list)
		return;

	while (current->next != NULL)
	{
		tmp = current->next;
		if (current->n > current->next->n)
		{
			swap_nodes(list, &tmp->prev, &tmp);
			print_list(*list);
			current = tmp;
			while (tmp->prev != NULL && tmp->n < tmp->prev->n &&
			       size != 2)
			{
				swap_nodes(list, &tmp->prev, &tmp);
				print_list(*list);
			}
		}
		if (current == NULL)
			break;
		current = current->next;
	}
}
