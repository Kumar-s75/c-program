#include <stdio.h> 

int main(){
    int n;
    do{
        printf("Enter a number:");
        scanf("%d",&n);
        printf("%d\n",n);
        if(n % 7 ==0){
            break;
        }
    }while(1);
    printf("Thank you");
     return 0;
}