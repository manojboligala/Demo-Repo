#include"list.h"

struct node *insert(struct node * head,int data)
{
    /* creating new node */
    struct node *new = malloc(sizeof(struct node));

    /* check node created */
    if (new == NULL)
	return 0;
	new -> data = data;
    new -> link = NULL;
    /* check list empty */
    if (head == NULL)
    {
	/* Updating head if list is empty */
	head = new;
    }
    else
    {
	/* Taking temp pointer to traverse the list */
	struct node *temp = head;

	/* Traversing till last node */
	while (temp -> link)
	{
	    temp = temp -> link;
	}

	/* Creating link between last node and gjgjgjg j new node */
	temp -> link = new;
    }
    return head;
}

