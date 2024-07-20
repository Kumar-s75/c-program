#include <stdio.h> 

int main(){
    int n,m;
    printf("Enter the no of rows n :");
    scanf("%d",&n);
     printf("Enter the no of columns m :");
    scanf("%d",&m);
    for(int i =1;i<=n;i++){// outer loop-no of lines=no of rows
    for(int i =1;i<=m;i++){// inner loop - no of sars in each line=no of columns
        printf("%d",i);
        
      }printf("\n");
    }
     return 0;
}