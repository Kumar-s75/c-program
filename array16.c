#include <stdio.h> 

int main(){
    int arr[40],pos,i,size,value;
    printf("enter the size of array:");
    scanf("%d",&size);
     for (i=0;i<size;i++){
        printf("enter elements of array:");
        scanf("%d",&arr[i]);


    }
   if(arr[i]%2==0){
    printf("%d\n",&arr[i]);

   }
   else if(arr[i]%2!=0){
    printf("%d\n",&arr[i]);
   }
   
    
     return 0;
}