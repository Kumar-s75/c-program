#include <stdio.h> 

void greet(int n){
    if(n==0) return;
    printf("good morning");
    greet(n-1);
    return;
}
int main(){
    int n;
    prinf("enter a value n :");
    scanf("%d",&n);
    greet(n);
     return 0;
}