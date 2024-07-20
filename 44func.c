#include <stdio.h> 
int main (int a, int b){
int min=a;
if (b<a) min=b;
return c; 
}
int main(){
    int n;
int min=0;
    printf("enter the no of lines:");
    scanf("%d",&n);
    for(int i =1;i<=2*n-1;i++){
for(int j =1;j<=2*n-1;j++){
    
int a=i;
if(i>n) a=2*n-1;
int b=j;
if(b>n) b=2*n-j;
min=minimum(a,b);
    printf("%d", n+1-min);    
     }printf("\n");}
return 0;}