#include <stdio.h> 

int main(){
    int arr[7]={7,4,5,9,8,2,1};
    int n=7;
    int i;
    printf("%d",arr[i]);
//selection sort
for(int i=0;i<n-1;i++){
    int INT_MAX;
    int min = INT_MAX;
    int minidx=-1;
    for(int j=i;j<=n-1;j++){
        if(min>arr[j]){
            min=arr[j];
            minidx=j;
        }
    }
    int temp=arr[minidx];
    arr[minidx]=arr[i];
    arr[i]=temp;
}
printf("\n");


     return 0;
}