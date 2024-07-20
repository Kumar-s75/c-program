#include <stdio.h> 
void printArray(int *ptr,int n){
    for(int i=0;i<n;i++){
        printf("The value of element %dis %d\n ",i+1,*(ptr+i));
    }//ptr +i ke andar element ka adress ka func hoga
//ptr[2]=5678this will also change in array of main
int main(){
    int array[]={1,2,75,343,569,786,345};
    printArray(arr,7);
    
     return 0;
}
//void printArray(int ptr[i],int n){
    //for(int i=0;i<n;i++){
       /// printf("The value of element %dis %d\n ",i+1,ptr[i]);
    ////ptr +i ke andar element ka adress ka func hoga
