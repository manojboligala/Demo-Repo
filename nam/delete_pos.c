#include"list.h"

struct node* delete_pos(struct node* head, int pos)

{
	struct node* temp = head;
	struct node* temp2 = head;
	if(head == NULL)
	{
		printf("Error : List is Empty..");
	}
	else if(pos == 1)
	{
		head = temp -> link;
		free(temp);
		temp = NULL;
	}
	else
	{
		while(pos != 1)
		{
			temp2 = temp;
			temp = temp -> link;
			pos--;
		}
		temp2 -> link = temp -> link;
		free(temp);
		temp = NULL;
	}
	return head;
}
