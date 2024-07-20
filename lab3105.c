#include <stdio.h> 
#include <conio.h>
void addition(){
    int a,b,sum;
    printf("Enter the values of two integers a and b:");
    scanf("%d%d",&a,&b);
    printf("sum =%d",sum=a+b);
}
void  main(){
    void addition();
    
    addition();

     getch();
}