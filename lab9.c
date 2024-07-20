#include <stdio.h>
int main(){
    int a,b,c;
     printf("Enter the value of a \n");
    scanf("%d",&a);
    printf("Enter the value of b \n");
    scanf("%d",&b);
    printf("Enter the value of c \n");   
    scanf("%d",&c);
    (a>b && a>c)?
    printf("a is the greatest number") :;
   
    (b>a && b>c)?
    printf("b is the greatest number"):;
   
   (c>b && c>a)?
    printf("c is the greatest number"):;
   
   

   
     return 0;
}