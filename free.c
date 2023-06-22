#include "monty.h"
/**
* free_stack - frees linked list
* @head: pointer to head of the stack
*/
void free_stack(stack_t *head)
{
	stack_t *temp;

	temp = head;
	while (head != NULL )
	{
		temp = head;
		free(temp);
		head = head->next;
	}
}
