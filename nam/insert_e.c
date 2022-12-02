#include"list.h"

struct node *insert_e(struct node * head,int data)
{
    
    struct node *new = malloc(sizeof(struct node));
   /* Insert at begining */

   // new -> data = data; 
   //new -> link = head;
   //head = new;

   /* Insert at End */

   new -> data = data;
   new -> link = NULL;

   if(head == NULL)
   {
	   head = new;
   }
   else
   {
	   struct node *temp = head;

	   while (temp -> link != NULL)
	   {
		   temp = temp -> link;
	   }
	   temp -> link = new;
   }
    return head;
}

