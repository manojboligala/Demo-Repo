#include "cal.h"

double getQuotient(int num1,int num2)
{
    double Quotient;
     if (num2 == 0)    
        {
            printf (" \n Divisor cannot be zero. Please enter another value: ");  
            scanf ("%d", &num2);        
        }
    Quotient = num1 / num2;
    return Quotient;
}