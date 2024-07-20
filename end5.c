// #include<stdio.h>

// int main(){
//     int a[]={10,11,-1,56,67,5,4};
//     int *p=a;
//     // printf("%d",*(p+2)-2);
//     printf("%d",*(p++ -3)-2);
// 
#include <stdio.h> 

int main(){
    // unsigned int a=10;
    // a=~a;
    // printf("%d",a);
    // if(7&8)
    // printf("honesty");
    // if((~7 & 0x000f)==8)
    // printf("is");
// int x=97;
// int y=sizeof(x++);
// printf("y is %d",y);
// int a=5,b=-1,c=0,d;
// d=++a&&++b||++c;//short circuit
// printf("%d%d%d%d",a,b,c,d);
switch(printf("Do")){
    case 1:
    printf("First\n");
    break;
    case 2:
    printf("second\n");
break;
    default:
    printf("Declaration\n");
    break;
}
unsigned int i=23;
signed char c=-23;
if(i>c)
printf("Yes\n");
else if (i<c)
printf("No\n");
     return 0;
}