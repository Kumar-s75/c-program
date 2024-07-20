#include <stdio.h> 
#include<stdbool.h>
#include <stdlib.h> 
int main(){
//     int n;
//     printf("enter array size:");
//     scanf("%d",&n);
//     // static memory allocation int arr=[n];
//     int *arr=new int [n];//dynamic memory allocation
// for (int i=0;i<n;i++){
//     scanf("%d",&arr[i]);
// }
// for (int i=0;i<n;i++){
//     printf("%d",arr[i]);
// }
int a=sizeof(bool);
printf("%d",a);
int*ptr =(int*) malloc(10*4);
printf("%d",*ptr+9);
ptr++;
printf("%d",*ptr);
ptr++;
printf("%d",*ptr);


     return 0;
}
