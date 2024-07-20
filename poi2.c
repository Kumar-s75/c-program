#include <stdio.h> 
  int main(){
    int age=34;
    int*ptr=&age;
    printf("%p\n",&age);//adress in hexadecimal
      printf("%u\n",&age);//adress in integer
            printf("%d\n",age);
                  printf("%d\n",*ptr);
                        printf("%d\n",(&age));
                        printf("%d\n",*(&age));
 return 0;}