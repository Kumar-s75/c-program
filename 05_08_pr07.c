//write  a program  using function to print the following pattern(first n lines).
//*
//* * *
//* * * * *
#include <stdio.h> 
void print pattern(int n);


int main(){
    int n=4;
    print(pattern(n));
    
     return 0;
}
void printpattern(int n){
    if (n==1){
        printf("*\n");
        return;
    }
    for(int i=0;i<(2*n-1);i++){
        printf("*");

    }
    printf("\n");
}