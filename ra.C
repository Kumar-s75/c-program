#include <stdio.h> 

int main(){
    int a,b;
    printf("Enter the value of number a\n");
    scanf("%d",&a);
    printf("Enter the value of number b\n");
    scanf("%d",&b);
    if (a>b){
        printf(" a is greater than b");
    }
    else if (b>a){
        printf("%dis grater than %d",b,a);

    }
    else{
        printf("b is equal to a");
    }

     return 0;
}
