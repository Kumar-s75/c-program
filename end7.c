#include <stdio.h>

void printCommonElements(int A[], int B[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i] == B[j]) {
                printf("%d ", A[i]);
                break;
            }
        }
    }
    printf("\n");
}
int main() {
    int n;
    int A[n],B[n];
    printf("enter the size of an array:",n);
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    printf("enter the element of A[%d] ",i);
    scanf("%d",&A[i]);}
    for(int j=0;j<n;j++){
    printf("enter the element of B[%d] ",j);
    scanf("%d",&B[j]);}

    printCommonElements(A, B, n);

    return 0;
}


