#include <stdio.h> 
int main(){
    int a,b,c;
    printf("Enter a no1 : ");
    scanf("%d",&a);
    printf("Enter a no1 : ");
    scanf("%d",&b);
    int min=(a<b)?a:b;
    int max=(a>b)?a:b;
    for(int i=min;i<=max;i++){
        for(int j=2;j<min;j++){
            if(min%j==0){c++;}}} 
            if(c==2)printf(" %d is a prime number",min);
           
            return 0;
}