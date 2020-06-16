#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 **swap_nodes_doublelklist-this swap nodes in double linkend list.
 *@list: is head of double linkend list.
 *Return: a head of list or null if the head no change.
 */

listint_t *swap_nodes_doublelklist(listint_t *list)
{
	listint_t *temp, *temp1;

	temp = list;
	temp1 = list->next->next;

	if (list->prev == NULL)
	{
		list = temp->next;
		list->next = temp;
		list->prev = NULL;

		list->next->prev = list;
		if (temp1)
		{
			list->next->next = temp1;
			list->next->next->prev = temp;
		}
		else
			list->next->next = NULL;
		return (list);
	}
	else
	{
		list = temp->next;
		list->next = temp;
		list->prev = temp->prev;

		temp->prev->next = temp->next;

		list->next->prev = list;
		if (temp1)
		{
			list->next->next = temp1;
			list->next->next->prev = temp;
		}
		else
			list->next->next = NULL;

	}
	return (NULL);
}
/**
 *insertion_sort_list - sort a double linked list.
 *@list: is a double linked list.
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *head;

	if (list == NULL || (*list)->next == NULL)
		return;
	temp = *list;
	head = *list;
	while (temp)
	{
		if ((temp)->next && (temp)->n > (temp)->next->n)
		{
			head = swap_nodes_doublelklist(temp);
			if (head)
			{
				*list = head;
				temp = *list;
				print_list(temp);
			}
			else
			{
				print_list(*list);
				temp = *list;
			}

		}
		else
		{
			temp = temp->next;
		}
	}


}
