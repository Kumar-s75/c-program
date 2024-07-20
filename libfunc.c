#include <stdio.h> 
#include <math.h> 

int main(){
    int a,x,y;
    printf("enter a number a:");
    scanf("%d",&a);
    int root=sqrt(a);
   printf("The square root is %d\n",root);
    printf("Enter numbers x and y: \n");
    scanf("%d %d",&x,&y);
   int q=pow(x,y);
   printf("%d",q);
     return 0;
}