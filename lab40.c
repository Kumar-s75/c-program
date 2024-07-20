//NAME-KUMAR SAURABH
//ROLL NO-22110045(TT)
#include <stdio.h> 
int main(){ int i, n1,n2,gcd;
    printf("Enter the value of n1, n2\n");
    scanf("%d %d",&n1,&n2);
    for(i=2;i<=n1 && i<=n2;i++)
    {if(n1%i==0 && n2%i==0)gcd=i; }
    printf(" gcd of %d and %d is %d",n1,n2,gcd);
     return 0;}