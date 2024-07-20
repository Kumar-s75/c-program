#include <stdio.h> 
#include <conio.h>
int addition(int a,int b){
   int num1,num2;
   printf("Enter the values of two integers:");
   scanf("%d%d",&num1,&num2);
    return(num1+num2);
}
void  main(){
    int result;
    int addition();
  result=addition();
  printf("sum =%d",result);

     getch();
}