//NAME -KUMAR SAURABH
//ROLL NO-2210045(TT) DETERMINANT OF A  2x2 MATRIX

#include <stdio.h>
int main(){
 
  int a[2][2], i, j;
 
  int determinant;
  printf("Enter the 4 elements of matrix: ");
  for(i = 0 ;i < 2;i++)
      for(j = 0;j < 2;j++)
           scanf("%d", &a[i][j]);
 printf("\nThe matrix is\n");
  for(i = 0;i < 2; i++){printf("\n");
      for(j = 0;j < 2; j++)
           printf("%d\t", a[i][j]); }
 determinant =(( a[0][0] *a[1][1])-(a[0][1]-a[1][0]));
 printf("\nDeterminant of 2X2 matrix: %d", determinant);
  return 0;}