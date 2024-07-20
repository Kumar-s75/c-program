#include <stdio.h> 



int main(){
    int a, b,product,sum,difference;
    printf("Enter the value of a and b");
    scanf("%d%d",&a,&b);
    product=multiply(a,b);
    printf("The product of these numbers is :%d",product);
     sum=addition(a,b);
    printf("The sum of these numbers is :%d",sum);
     difference=subtraction(a,b);
    printf("The difference of these numbers is :%d",difference);
    getch();
     
}

int additionNum(int ,int );
int additionNum(int num1,int num2){
 int result=num1+num2;
   
return result;
}

int subtractionNum(int ,int );
int subtractionNum(int num1,int num2){
 int result=num1-num2;
   
return result;
}

int multiplyNum(int ,int );
int multiplyNum(int num1,int num2){
 int result=num1*num2;
   
return result;
}
