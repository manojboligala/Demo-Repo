#include"list.h"

struct node *insert_pos(struct node * head,int pos,int data)
{
 
    struct node *temp = head;
 
    struct node *new = malloc(sizeof(struct node));


    new -> data = data;
    new -> link = NULL;
    
   pos--; 
   while (pos != 1)
   {
	   temp = temp -> link;
	   pos--;
   }

	   new -> link = temp -> link;
	   temp -> link = new;
  
    return head;
}

