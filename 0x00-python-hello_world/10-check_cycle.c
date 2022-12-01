#include "lists.h"

/**
 * check_cycle - function that checks if a linked list contains a cycle
 * @list: linked list to check
 * Return: 1 if list has a cycle, 0 if list does not have a cycle.
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_*fast = list;

	/*check for cycle within the list, if none return 0*/
	if (!list)
		return (0);
		/*no cycle, so 0*/
	while(slow && fast && fast->next)
	/*while checking from slow,fast and next list for any cycle*/
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast
                         return (1);
	/*Cycle is present on list, therefore 1 returned*/

	}

	/*once no more lists can be checked, 0 is returned and there are no cycles*/
	return (0);
}
