#include "list.h"

int main()
{
    /* Declaring the required variables */
    struct node *head = NULL;
    int data, choice;
    char ch;

    while(1) 
    {
	/* Display menu to user */
	printf("0.Exit\n1.Insert_at_Begining\n2.Insert_at_End\n3.Print list\nEnter your choice : ");
	scanf("%d", &choice);

	switch (choice)
	{
	    case 0:
		printf("Exitinf from the Program....\n");
		exit(EXIT_SUCCESS);
	    case 1:
	        printf("Enter the data to insert a t Begining :");
	        scanf("%d",&data);
	        head = insert(head,data);
		break;	
	    case 2: /* insert at last */

		printf("Enter the new data to be inserted : ");
		scanf("%d", &data);

		head = insert_all(head,data);
		
		break;

	    case 3: /* print list */
		print(head);
		break;

	    default :
		printf("Error : Invalid choice \n");
	}
    }
    return 0;
}
