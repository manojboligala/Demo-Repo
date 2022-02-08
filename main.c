#include "linkedList.h"

int main()
{
	int choice;
	int firstNumber, secondNumber;
        int sum, difference, product, modulo;
        float quotient;
	printf("Enter First Number: ");
        scanf("%d", &firstNumber);
        printf("Enter Second Number: ");
        scanf("%d", &secondNumber); 

while (1)
  {
     printf ("0. Exit\n");
     printf ("1. Add 2 Numbers\n");
     printf ("2. Sub 2 Numbers\n");
     printf ("3. Mul 2 Numbers\n");
     printf ("4. Div 2 Numbers\n");

     printf ("Enter the option:\t");
     scanf ("%d", &choice);

     switch (choice)
     {
       case 0:
               printf ("Exiting the program.\n");
               exit (EXIT_SUCCESS);
               break;
       case 1:
	       printf("Add 2 Numbers\n");
	       sum = getSum(firstNumber, secondNumber);
	       printf("\nSum = %d", sum);
               break;
       case 2:
               printf("Sub 2 Numbers...\n");
	       difference = getDifference(firstNumber, secondNumber);
	       printf("\nDifference  = %d", difference);
               break;
       case 3:
      	       printf("Mul 2 Numbers...\n");
    	       product = getProduct(firstNumber, secondNumber);
	       printf("\nMultiplication = %d", product);
	       break;
       case 4:
	       printf("Div 2 Numbers\n");
	       quotient = getQuotient(firstNumber, secondNumber);
	       printf("\nDivision = %.3f", quotient);
	       break;     

     }
  }



}

