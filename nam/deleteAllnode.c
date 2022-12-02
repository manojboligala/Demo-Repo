#include "list.h"

struct node* deleteAllnode(struct node * head)
{
   struct node * temp = NULL;

   while (head != NULL)
   {
     temp = head->link;
     free(head);
     head = temp;
   }
   return head;
}
