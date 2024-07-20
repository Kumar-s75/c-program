//NAME-KUMAR SAURABH
//ROLL NO-22110045(TT)
#include <stdio.h> 
int main(){
    int marks[10],i,n,sum=0;
    int average;
    printf("enter number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter number:");
        scanf("%d",&marks[i]);}
        for(i=0;i<n;i++){
    sum+=marks[i];}
   average=sum/n;
    printf("sum =%d\n",sum);
      printf("average =%d\n",average);
 return 0;
}