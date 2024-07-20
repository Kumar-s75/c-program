//NAME -KUMAR SAURABH
//ROLL NO-2210045(TT)    NORMAL AND TRACE  OF A MATRIX
#include <stdio.h>
#include <math.h>

int main() {
    int i, j, n, sum = 0, sum1 = 0, a = 0, normal;
printf("\nEnter the number of rows[columns] of the matrix::\n\n");
    scanf("%d", &n);
    int x[n][n];
printf("\n----Enter the %d elements of the first matrix----\n\n", n * n);
 for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &x[i][j]);
            a = x[i][j]*x[i][j];
            sum1 += a;}}
    normal = sqrt((double)sum1);
printf("\n\nThe normal of the given matrix is: %d", normal);
    for(i = 0; i < n; i++) {sum = sum + x[i][i];}
     printf("\n\nThe Trace of the given matrix is: %d\n", sum);
    return 0;
}