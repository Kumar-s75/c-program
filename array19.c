#include <stdio.h> 

int main(){
    int i=0,k=0;
    int arr[5][4]={{1,2,3,4},{2,3,4,5},{3,4,5,6},{4,5,6,7},{7,8,9,10}};
    for(i=0;i<5;i++){
        for(k=0;k<4;k++){
            printf("arr[%d][%d]=%d\n",i,k,arr[i][k]);

        }
    }

     return 0;
}