#include <stdio.h> 

int main(){
    int p,r,t,si(int,int,int),simpleinterest,n1,n2,n3;
    printf("enter the value of p,r and t:");
    scanf("%d%d%d",&p,&r,&t);

simpleinterest=si(p,r,t);
printf("\nThe simpleinterest is %d",simpleinterest);
getch();
}
 int si(n1,n2,n3){

return((n1*n2*n3)/100);
}