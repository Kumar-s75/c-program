#include <stdio.h> 

int main(){
    int a=0,k=15;
    int b=++a>0?(++k,++k):(++a,a++);
    printf("%d %d %d",a,b,k);
     return 0;
}