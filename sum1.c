#include <stdio.h> 

int main(){
    int i,n,sum=0;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum +i;
        
        
    }
    printf("sum of %d numbers is %d ",n,sum);
     return 0;
}