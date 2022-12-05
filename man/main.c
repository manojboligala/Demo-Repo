#include "linkedList.h"

int main()
{
  int choice;
  int key;
  int keyLoc;
  struct node * head;
  int loc;
  int id1;
  int id2;
  int upBound;
  int maxLoc;
  head = NULL;

  while (1)
  {
     printf ("0. Exit\n");
     printf ("1. Insert Node\n");
     printf ("2. Delete a Node\n");
     printf ("3. Traverse the Linked List\n");
     printf ("4. Swap two nodes\n");
     printf ("5. Bubble Sort\n");
    

     printf ("Enter the option:\t");
     scanf ("%d", &choice);

     switch (choice)
     {
       case 0:
	       printf ("Exiting the program.\n");
	       if (head != NULL)
	       {
		  printf ("Deleting all the nodes from the linked list.\n");
	          head = deleteAllNodes (head);
	       }
	       exit (EXIT_SUCCESS);
	       break;
       case 1:
	       printf ("Inserting a node...\n");
	       printf ("Enter the location (index) to insert the node:\t");
	       scanf ("%d", &loc);
	       head = insertNode (head, loc, NULL);
	       break;
       case 2:
	       printf ("Deleting a node...\n");
               printf ("Enter the index of the node you want to delete:\t");
	       scanf ("%d", &loc);
	       head = deleteNode (head, loc, DELETE);
	       break;
	       
       case 3:
	       if (head != NULL)
	       {
	          printf ("Nodes of the linked list\n");
	          traverseLinkedList (head);
	       }
	       else
	       {
	          printf ("Linked List is empty.\n");
	       }
	       break;
       case 4:
	       if (head != NULL)
	       {
	          printf ("Enter the two indices to swap.\t");
		  scanf ("%d %d", &id1, &id2);
		  head = swapNode (head, id1, id2);
	       }
	       else
	       {
	          printf ("List is empty.\n");
	       }
	       break;
       case 5:

               printf (" bubble sort ....\n");
               head=bubbleSort(head);
               break;
       default:
	       printf ("Invalid Request...\n");
	       break;
     }
  }

  return 0;

}
