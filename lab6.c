#include <stdio.h> 

int main(){
     int number,c;
     printf("Enter the value of number \n");
    scanf("%d",&number);
     c=number%2;
    c==0 ?printf("Number is even"):printf("Number is odd");
     return 0;
}