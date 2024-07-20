#include <stdio.h> 
int n,m;
int main(){
     printf("Enter the no of rows n :");
    scanf("%d",&n);

    for(int i =1;i<=n;i++){// outer loop-no of lines=no of rows=i
    for(int j =1;j<=n;j++){// inner loop - no of sars in each line=no of columns=j
       if(i==j||i+j==6){ printf("*");}
       else{
        printf("i");
       }
        
      }printf("\n");
    }
     return 0;
}   
