#include "list.h"

int linearSearch(struct node * head, int key)
{
   struct node * temp;
   temp = head;
   int i;

   i = 1;
   while (temp != NULL)
   {
      if (temp -> data == key)
      {
         return i;
      }
      temp = temp->link;
      i++;
   }
   return -1;
}
