#include <stdio.h> 
int factorial(int x){
    int fact=1;
    for(int i=2;i<=x:i++){
        fact=fact*i;
    }
    return fact;

}
int combination(int n,int r){
    factorial(n)/(factorial(r)*factorial(n-r));d
}
int main(){
    int n,r;
    printf("enter the value of n");
    scanf("%d",&n);
printf("enter the value of r");
    scanf("%d",&r);
    int ncr=factorial(n)/factorial(r)*fact(n-r);
    //int ncr=combination(n,r);
    printf("%d",ncr);

     return 0;
}