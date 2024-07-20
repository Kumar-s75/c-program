#include <stdio.h> 
#include <string.h>
int main(){
   typedef struct book{
        char name[50];
        int noofpages;
        float price;
    } book;
    book d;
    book c;
    book b;
    book a;
    a.noofpages = 100;
    a.price =411.5;
  strcpy(a.name,"Secret Seven");
    printf("%d\n",a.noofpages);
    printf("%f\n",a.price);
    printf("%s\n",a.name);
     return 0;
}