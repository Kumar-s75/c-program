#include <stdio.h> 

int main(){
    int a[5]={1,2,3,4,5};
    int *p;
    p=a;
    printf("%d\n",p);
    printf("%d\n",&a[0]);
    int (*ptr)[5];
    ptr=&a;
    printf("%d\n",ptr);
    p++;
    printf("%d\n",p);
    ptr++;
     return 0;
}