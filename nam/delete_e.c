#include"list.h"

struct node* delete_e(struct node* head)
{
	if (head == NULL)
	{
		printf("Error: List is Empty..");
	}
	else if(head -> link == NULL)
	{
		free(head);
		head = NULL;
	}
	else
	{
		struct node* temp = head;
		struct node* temp2 =head;

		while(temp -> link != NULL)
		{
			temp2 = temp;
			temp = temp -> link;
		}
		temp2 -> link = NULL;
		free(temp);
		temp = NULL;
	}
	return head;
}
