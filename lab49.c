#include <stdio.h> 
typrdef enum {false,true} b;
int main(){
    b x= false;// variable initialization
    if (x== true)//conditional statements
    {
        printf("The value of x is true");
    }
    else{
        printf("The value of x is false");
    }
     return 0;
}