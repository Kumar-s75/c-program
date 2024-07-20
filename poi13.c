#include <stdio.h> 

int main(){
    int a=29;
int *ptr=&a;
    printf("%d\n",(*ptr)++);
    printf("%d\n",*ptr++);
    printf("%d\n",ptr);
     return 0;
}