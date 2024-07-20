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
    printf("enter the position of an array where you have to delete an element:");
        scanf("%d",&pos);
     if(pos>=size+1){
        printf("deletion not possible\n");}
     else{ for(i=pos-1;i<size-1;i++){
            arr[i+1]=arr[i]; }
printf("final array after deleting the value is :");
  for (i=0;i<=size;i++){
        printf("%d\n",arr[i]);}}
return 0;
}