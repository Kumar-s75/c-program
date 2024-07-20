

#include <stdio.h> 

int main(){
    int year,c;
    printf("Enter the value of Year\n");
    scanf("%d",&year);
    c=((year%4==0)&&((year%400==0)||(year%100!=0)));
    
    switch(c){
    case 1:
   
    printf("The year is a leap year");
   break;
    case 0:

    printf("The year is not a leap year");
   break;
   
default:
printf("Invalid");
break;
    }
     return 0;
}