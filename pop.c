#include "monty.h"
/**
 * f_pop - prints the top
 * @head: stack head
 * @counter: line number
 * Return: None
*/
void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(global_vars.file);
		free(global_vars.file);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
