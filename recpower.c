#include <stdio.h> 
int power (int a,int b){
    int x=1;
    for(int i;i<=b;i++){
        x=x*a;
    }
    return x;
}
int main(){
    int a;
    printf("Enter base :");
    scanf("%d",&a);
    int b;
    printf("Enter power:");
    scanf("%d",&b);
    int p=power(a,b);
    printf("%d raised to power  %d is %d",a,b,p);
    return 0;
}