#include <stdio.h> 

int main(){
    int n;
    printf("Enter the value of n :");
    scanf("%d",&n);
    for(int i =0;i<n;i++){// outer loop-no of lines=no of rows
    for(int i =0;i<n;i++){// inner loop - no of sars in each line=no of columns
        printf("*");
      }printf("\n");
    }
     return 0;
}