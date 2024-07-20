//NAME-KUMAR SAURABH
//ROLLNO-22110045(TT)

#include <stdio.h> 

int main(){
    int i,n,sum=0,average;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum +i;
        average =sum/n;
        
    }
    printf("sum of %d numbers is %d\n ",n,sum);
     printf("average of %d numbers is %d ",n,average);
     return 0;
}