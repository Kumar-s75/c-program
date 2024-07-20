#include <stdio.h> 

int main(){
    int n,m;
    printf("Enter the no of rows n :");
    scanf("%d",&n);
int a=n;
    for(int i =1;i<=n;i++){// outer loop-no of lines=no of rows=i
    for(int j=1;j<=2*n-1;j=i+2){// inner loop - no of stars in each line=no of columns=j
        printf("%d",j);
        
      }printf("\n");
    }
     return 0;
}
