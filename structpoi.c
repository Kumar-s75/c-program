#include <stdio.h> 
typedef int*int_pointer;
int main(){
    int x=7;
    int y=5;
  int_pointer a=&x , b=&y;
     printf("%p\n",a);
      printf("%p\n",b);
       return 0;}