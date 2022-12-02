#include "list.h"

int main()
{
    /* Declaring the required variables */
    struct node *head = NULL;
    int data;
    int choice;
    int position;
    int key;
    int keyLoc;
    int Numnode;
    char ch;

    while(1) 
    {
	/* Display menu to user */
	printf("0.Exit\n");
	printf("1.Insert_at_Begining\n");
	printf("2.Insert_at_End\n");
	printf("3.Insert_at_given_Position\n");
        printf("4.delete_Beg\n");
	printf("5.delete_e\n");
	printf("6.delete_pos\n");
	printf("7.Number of Nodes\n");
        printf("8.linearsearch\n");
	printf("9.Print list\n");
	printf("10.mid node\n");
			
	printf("Enter your choice: \t");
	scanf("%d", &choice);

	switch (choice)
	{
	    case 0:
		printf("Exit from the Program....\n");
		if (head != NULL)
               {
                  printf ("Deleting all the nodes from the linked list.\n");
                  head = deleteAllnode(head);
               }
		exit(EXIT_SUCCESS);
	    case 1:
	        printf("Enter the data to insert at Begining :");
	        scanf("%d",&data);
	        head = insert_b(head,data);
		break;	
	    case 2: /* insert at last */

		printf("Enter the data to be inserted at End: ");
		scanf("%d", &data);

		head = insert_e(head,data);	
		break;
	    case 3:
		printf("Enter the Position to insert the data : ");
		scanf("%d",&position);
		printf("Enter the data to be insert at given Position :");
		scanf("%d",&data);

		head = insert_pos(head,position,data);
		break;
	    case 4:
		printf("Node deleted at begining Sucessfully..");

		head = delete_b(head);
		break;
	    case 5:
		printf("Node deleted at Last Successfully..");

		head = delete_e(head);
		break;
	    case 6:
		printf("Enter the Position to delete the Node :");
		scanf("%d",&position);

		head = delete_pos(head,position);
		break;
	    case 7:
		Numnode = calculateNumNode(head);
		if (head == NULL)
		{
			printf("Error: List is Empty\n");
		}
		else
		{
		printf("Nodes present in the list is %d\n",Numnode);
		}
		break;
	    case 8:
               printf ("Enter the key to search.\n");
               scanf ("%d", &key);
               keyLoc = linearSearch(head, key);
               if (keyLoc == -1)
               {
                  printf ("Key could not be found.\n");
               }
               else
               {
                  printf ("Index of the given key is %d.\n", keyLoc);
               }
               break;
	    case 9: /* print list */
		print(head);
		break;
	    case 10:
	        midNodes(head);
	        break;	

	    default :
		printf("Error : Invalid choice \n");
		break;
	}
    }
    return 0;
}
