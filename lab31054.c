#include <stdio.h> 
#include <conio.h> 
int main(){
    int mul(int,int),sub(int,int), add(int ,int ),sum,num1,num2,product,difference;
printf("enter the value of two numbers a and b:");
scanf("%d%d",&num1,&num2);
product=mul(num1,num2);
printf("\nproduct of %d and %d is %d",num1,num2,product);
difference=sub(num1,num2);
printf("\n difference of %d and %d is %d", num1,num2,difference);
sum=add(num1,num2);
printf("\nsum  of %d and %d is %d", num1,num2,sum);
    getch();
     
}
int mul(int n1,int n2){
    return (n1*n2);
    }
    int sub(int n1,int n2){
        return (n1-n2);
    }
    int add(int n1,int n2){
        return (n1+n2);
    }