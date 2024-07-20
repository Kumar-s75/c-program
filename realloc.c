#include <stdio.h> 
#include <stdlib.h> 
int main(){//in reallocation an array of specific memory is created and  compliler checks that if 
    int*ptr=malloc(10*4);//there is enough space in that array then reallocation occurs and extra
    printf("%p\n",ptr);//memory is created but if reallocated memory is too big i.e. in this case
    //then another array is creted for extra memory and addreaa of both arrays are different.
    ptr=realloc(ptr,20000*4);
    printf("%p",ptr);
     return 0;
}