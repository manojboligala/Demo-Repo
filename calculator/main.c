#include "cal.h"

int main()
{
    int choice;
    double firstnum, secondnum;
    double sum;
    double add, mul;
    double Quotient;
    
    printf("Enter Firstnum: ");
    scanf("%lf",&firstnum);
    
    printf("Enter Secondnum: ");
    scanf("%lf",&secondnum);
    
    while(1)
    {
        printf("\n0. Exit from the program\n");
        printf("1. Add 2 numbers\n");
        printf("2. Sub 2 numbers\n");
        printf("3. Mul 2 numbers\n");
        printf("4. Div 2 numbers\n");
        
        printf("Enter the option\n");
        scanf("%d",&choice);
        
        switch (choice)
        {
            case 0:
            printf("Exiting the program.\n");
            exit(EXIT_SUCCESS);
            break;
           
           case 1:
            printf("Add 2 numbers\n");
            add = getadd(firstnum, secondnum);
            printf("\nsum = %.1lf\n",add);
            break;
            
           case 2:
            printf("Sub 2 numbers\n");
            sum = getsub(firstnum, secondnum);
            printf("\nsum = %.1lf\n",sum);
            break;
            
           case 3:
            printf("Mul 2 numbers\n");
            mul = getmul(firstnum, secondnum);
            printf("\nsum = %.1lf\n",mul);
            break;
            
           case 4:
            printf("Div 2 numbers\n");
            Quotient = getQuotient(firstnum, secondnum);
            printf("\nsum = %2f\n",Quotient);
            break;
            
            default:
      printf("Error! operator is not correct");
            
                 
                    
        }
    }
    
}
