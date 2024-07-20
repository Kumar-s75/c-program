#include <stdio.h> 

int main(){
    int n,m;
    printf("Enter the no of rows n :");
    scanf("%d",&n);
     printf("Enter the no of columns m :");
    scanf("%d",&m);
    for(int i =0;i<n;i++){// outer loop-no of lines=no of rows
    for(int i =0;i<m;i++){// inner loop - no of sars in each line=no of columns
        printf("*");
      }printf("\n");
    }
     return 0;
}