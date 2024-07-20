#include <stdio.h> ///here a and b are different in both function and main.
void swap(int a,int b){
int temp=a;
a=b;
b=temp;
return;
}
int main(){
    int a,b;
    printf("Enter the value of a\n:");
    scanf("%d",&a);
 printf("Enter the value of b\n:");
    scanf("%d",&b);
    swap(a,b);

printf("The value of a is %d\n",a);
printf("The value of b is %d",b);

     return 0;
}