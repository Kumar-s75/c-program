//write a program to print the address of the variable , use this to get the value of the variable.
#include <stdio.h> 

int main(){
    int a;
    int *ptr;
    ptr=&a;
    printf("The adress of a variable is %u\n",ptr);
    printf("The value  of a variable is %d\n",*ptr);
    
     return 0;
}