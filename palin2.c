#include <stdio.h> 
  void palindrome(){
        int n,reversed=0,remainder,original;
        original=n;
while(n!=0){
             remainder =n%10; reversed= reversed*10+remainder; n/=10; }
    if (original==reversed){ printf("%d is a palindrome",original); }
        else{printf("%d is not a palindrome",original); }
         }
int main(){
   
    int n,reversed=0,remainder,original;
    printf("Enter  an integer : ");
    scanf("%d",&n);
  
      palindrome();
    return 0;}
  