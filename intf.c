//NAME-KUMAR SAURABH
//ROLL NO-22110045(TT)

#include <stdio.h>
#include <math.h>
int main()
{
        float n;
        printf("Enter the number : ");
        scanf("%f", &n);
        int x = floor(n); 
        if ( x == n)
        {
                printf("The entered number is an integer\n");
        }
        else
        {
                printf("The entered number is float\n");
        }
        return 0;
}