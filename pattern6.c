#include <stdio.h> 

int main(){
    int n,m;
    printf("Enter the no of rows n :");
    scanf("%d",&n);

    for(int i =1;i<=n;i++){// outer loop-no of lines=no of rows=i
    for(int j =1;j<=i;j++){// inner loop - no of sars in each line=no of columns=j
        printf("*");
        
      }printf("\n");
    }
     return 0;
}