#include <stdio.h> 
int way(int n){
    if(n<=2) return n;
    

int totalways= way(n-1)+way(n-2);
return totalways;
}

int main(){
    int n;
    printf("enter number of nth stair :");
    scanf("%d",&n);
    int ways= way(n);
    printf("%d",ways);
     return 0;
}