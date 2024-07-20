#include <stdio.h> 

int main(){
    int n=50;
    int *p;
    p=&n;
    printf("The adddress of p variable is %x\n ",p);
    printf("The Value  of p variable is %d\n ",*p);
     return 0;
}