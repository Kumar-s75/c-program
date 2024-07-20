//NAME-KUMAR SAURABH
//ROLLNO-22110045(TT)
#include <stdio.h>
 #include <string.h>
int main(){int age;
    printf("Enter the value of  age");
     scanf("%d ",&age);
     char status;
     status=(age>22)?'M':'U';
     if (status=='M')printf("Married"); 
     else
     printf("UnMarried");
return 0;}