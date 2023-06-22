#include "monty.h"
/**
 * f_push - add node to the stack
 * @head: stack head
 * @counter: line number
 * Return: None
*/
void f_push(stack_t **head, unsigned int counter)
{
	int n, j = 0, flag = 0;

	if (global_vars.arg)
	{
		if (global_vars.arg[0] == '-')
			j++;
		for (; global_vars.arg[j] != '\0'; j++)
		{
			if (global_vars.arg[j] > 57 || global_vars.arg[j] < 48)
				flag = 1; }
		if (flag == 1)
		{ 
			fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(global_vars.file);
			free(global_vars.line);
			free_stack(*head);
			exit(EXIT_FAILURE); 
		}
	}
	else
	{ 
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(global_vars.file);
		free(global_vars.file);
		free_stack(*head);
		exit(EXIT_FAILURE); 
	}

	n = atoi(global_vars.arg);

	if (global_vars.flag == 0)
		addnode(head, n);
	else
		addqueue(head, n);
}
