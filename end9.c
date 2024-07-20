#include <stdio.h> 

// int main(){
//     int x=3,y=1,z=-1,w=1;
//     for(int i=1;i<=4;i++)
//     x=y;
//     y=z;
//     z=w;
//     w=x+y+z;
//     printf("%d\n",w);
// int i,j;
// for(i=0;i<=2;i++){
//     for(j=0;j<=2;){
//         printf("%d",j);
//         break;
//     }printf("%d",i);
// }

    // int *a,b[5]={1,2,3,4,5};
    // a=b;
    // printf("%d%d",*(b+2),*(a+3));
    // struct abc {int a;int b;};
    // struct abc def[5];
    // void main()
    // {
    //     def[0].a=5;def[0].b=10;
    //     def[1].a=15;def[1].b=20;
    //     printf("%d",++(*def).a);
    // }
    // int x,N;
    // scanf("%d",&N);
    // printf("%d\n",N);
    // N/=2;
    // x=(N>15)?(N=4):(N=12);
    // if(x<10)
    // if(x<15)
    // printf("A");
    // else
    // printf("B");
    // printf("C");

// void f(int *p, int *q) {
//  p=q;
//  *p=2;
// }
// int i=0, j=1;
// int main() {
//  f(&i, &j);
//  printf("%d %d\n", i,j);
//  return 0;int find(int n)
// int n;
// int find(int n){
//  if (n == 0) 
//  return 0; 
//  else
//  return (n % 2 + 10 *find(n / 2));
// } int main()
// {
//  int n = 10;
//  printf("%d", find(n));
//  return 0; }
//  int f(int a)
// {
//  a > 20? return(10): return(20);
// }
// int main()
// {
//  int f(int);
//  int b;
//  b = f(20);
//  printf("%d\n", b);
 void mystery(int *ptra, int *ptrb) 
{ int *temp;
 temp = ptrb;
 ptrb = ptra;
 ptra = temp;
}int main() 
{
 int a=2016, b=0, c=4, d=42;
 mystery(&a, &b);
 if (a < c)
 mystery(&c, &a);
 mystery(&a, &d);
 printf("%dn", a);
}

 return 0;
}

