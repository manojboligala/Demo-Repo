#include "list.h"

void print(struct node *head)
{
    struct node *temp;
    
    /* Checking list is empty */
    if (head == NULL)
    {
	printf("List is empty...\n");
	return;
    }
    
    temp = head;
   
	/* Traversing the list and printing the values added */
	while (temp != NULL)
	{
	    printf("Data = %d\n", temp -> data);
	    temp = temp -> link;
	}
}

