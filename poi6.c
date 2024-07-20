#include <stdio.h> 

int main(){
    int a=7;
    int *p;
    p=&a;
    printf("%d\n",a);
    
    printf("%d\n",&a);

printf("%d\n",*p);
printf("%d\n",&p);



     return 0;
}