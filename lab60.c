#include <stdio.h> 

int main(){
    printf("%d",func());
    printf("\n%d",func());
    
     return 0;
}
int func()
{
    int count=0;//static int count =0 for static variable
    count++;
    return count;
}