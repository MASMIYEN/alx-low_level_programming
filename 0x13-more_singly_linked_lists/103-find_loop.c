#include "lists.h"

/**
 * find_listint_loop - find a node within a loop
 *
 * @head: pointer of the head node
 *
 * Return: address of the node within the loop || NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise = head, *shell = head;

	while (shell && shell->next)
	{
		tortoise = tortoise->next;
		shell = shell->next->next;

		if (tortoise == shell)
		{
			tortoise = head;
			while (tortoise != shell)
			{
				tortoise = tortoise->next;
				shell = shell->next;
			}
			return (shell);
		}
	}
	return (NULL);
}
