#include <stdio.h> 
void swap (int *x,int*y){
    int temp;
    temp = *x;
    *x= *y;
    *y=temp;
    return;
    }
int main(){
   int a=9,
    b=2;
    swap(&a,&b);
    printf("value of a is:%d\n",a);
     printf("value of b is:%d\n",b);


    
     return 0;
}