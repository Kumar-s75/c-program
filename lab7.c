

#include <stdio.h> 

int main(){
    int a,b,c;
     printf("Enter the values of a ,b,c \n");
    scanf("%d %d %d" ,&a,&b,&c);
    
   if (a>=b && a>=c){
    printf("a is the greatest number");
   }
    else if (b>=a && b>=c){
    printf("b is the greatest number");
   }
  else  if (c>=b && c>=a){
    printf("c is the greatest number");
   }
   

   
     return 0;
}