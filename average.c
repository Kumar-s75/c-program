//NAME-KUMAR SAURABH
//ROLL NO- 22110045(TT)

#include <stdio.h> 
int main(){
    int x,number,i=1,average,sum;
     printf("Enter the value of x numbers for average \n");
    scanf("%d",&x);
    while (i<=x){
printf("Enter the value of number\n");i++;
    scanf("%d",&number);
sum+=number;  }
     printf("sum of numbers is %d\n ",sum);
     printf("The average is %d \n",sum/x);
      return 0;
}