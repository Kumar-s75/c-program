#include <stdio.h> 

int main(){
    int nrfact=1,nfact=1,rfact=1,n,c,r=1;
    printf("Enter the value of n :");
    scanf("%d",&n);
    printf("Enter the value of  r:");
    scanf("%d",&r);
    for(int i=2;i<=n;i++){
nfact=nfact*i;}
for(int i=2;i<=r;i++){
rfact=rfact*i;}
for(int i=2;i<=n-r;i++){
   nrfact=nrfact*i;}
   int ncr =nfact/(rfact)*(nrfact);

     return 0;
}