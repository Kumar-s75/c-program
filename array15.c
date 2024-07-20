//NAME-KUMAR SAURABH
//ROLL NO-22110045(TT)
#include <stdio.h> 
int main(){
    int arr[40],pos,i,size,value;
    printf("enter the size of array:");
    scanf("%d",&size);
     for (i=0;i<size;i++){
        printf("enter elements of array:");
        scanf("%d",&arr[i]);}
    for (i=0;i<size;i++){
        printf("%d\n",arr[i]); }
    printf("enter the position of an array where you have to insert an element:");
        scanf("%d",&pos);
     printf("enter the value of the  element:");
        scanf("%d",&value);
        for(i=size-1;i>=pos-1;i--){
            arr[i+1]=arr[i];
            arr[pos-1]=value; }
printf("final array after inserting the value is :");
  for (i=0;i<=size;i++){
        printf("%d\n",arr[i]);}
        return 0;
}