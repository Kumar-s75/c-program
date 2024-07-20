#include <stdio.h> 

int main(){
    int n,m;
    printf("Enter the no of rows n :");
    scanf("%d",&n);
int a=1;
    for(int i =1;i<=n;i++){// outer loop-no of lines=no of rows=i
    int a=1;
    for(int j=1;j<=n;j++){// inner loop - no of stars in each line=no of columns=j
        printf("%d\t",a);//for triangle j<=i
        a=a+2;
      }printf("\n");
    }
     return 0;

