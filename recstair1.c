#include <stdio.h> 
int way(int n){
    if(n<=3) return n;
    

int totalways= way(n-1)+way(n-2)+way(n-3);
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