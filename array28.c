//NAME - KUMAR SAURABH
// ROLL NO- 22110045(TT)
#include<stdio.h>
#include<stdlib.h>
int main(){int row,col,i,j,a[10][10],count = 0;
   printf("Enter row\n");
   scanf("%d",&row);
   printf("Enter Column\n");
   scanf("%d",&col);
   printf("Enter Element of Matrix1\n");
   for(i = 0; i < row; i++){
      for(j = 0; j < col; j++){
         scanf("%d",&a[i][j]);} }
   printf("Elements are:");
   for(i = 0; i < row; i++){
      for(j = 0; j < col; j++){
         printf("%d\t\n",a[i][j]); }}
   for(i = 0; i < row; i++){
      for(j = 0; j < col; j++){ if(a[i][j] == 0) count++;} }
   if(count > ((row * col)/2)){
      printf("\nMatrix is a sparse matrix ");}
   else{
      printf("Matrix is not sparse matrix");
}
return 0;
}