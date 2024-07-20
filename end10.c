#include <stdio.h> 
int  gcd(int a,int b){
    if (b==0) return a;
    else{
        return (b,a%b);
    }
}
int main(){
    int num1,num2;
    printf("Enter the values of num1 and num 2:");
    scanf("%d%d",&num1,&num2);
    int result =gcd(num1,num2);
    printf("gcd of %d and %d is %d",num1,num2,result);

     return 0;
}