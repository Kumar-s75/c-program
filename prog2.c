#include <stdio.h> 

int main(){
    int a=0,k=15;
    int b=++a>0?(++k,k++):(++a,a++);
    printf("%d",a);
       printf("%d",b);
          printf("%d",k);

     return 0;
}