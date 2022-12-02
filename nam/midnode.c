#include"list.h"

int midNodes(struct node* head)
{
	struct node* temp;
	struct node* temp2;
	int flag = 0;

	temp = temp2 = head;
	while(temp2 -> link != NULL)
	{
		temp2 = temp2 -> link;
		if(flag)
		{
			temp = temp -> link;
		}
		flag = !flag;
	}
	if(flag)
	{
	       	printf("List contains even number of nodes\nThe middle two node's values are: %d  %d\n", temp->link->data, temp->data);
	}
	else
	{
		printf("The middle node of the list is: %d\n", temp->data);
	}

}
