#include"list.h"

struct node* delete_b(struct node *head)
{
	struct node* temp;
	if(head == NULL)
	{
		printf("Error: List is Empty\n");
	}
	else
	{
		temp = head;
		head = temp -> link;
		free(temp);
	}
	return head;
}
