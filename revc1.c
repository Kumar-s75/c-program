//NAME-KUMAR SAURABH
//ROLL NO-22110045(TT)

#include <stdio.h> 
int a,b;
int main(){
    printf("Enter the two values  to find the gratest and smallest number :-\n");
    scanf("%d%d",&a,&b);
    if(a==b)
    {
        printf("both are equal \n");

    }
    else if (a>b){
        printf("The largest number is %d\n",a);
         printf("The smallest number is %d\n",b);

    }
    else{
         printf("The largest number is %d\n",b);
        printf("The smallest number is %d\n",a);
    }
     return 0;
}