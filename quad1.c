#include <stdio.h> 
#include <math.h>
int main(){
    float x,a,b,d,c,root,root1,root2,imgpart, realpart;
    printf("Enter the coefficients a,b,c");
    scanf("%f%f%f",&a,&b,&c);
    d= b*b-4*a*c;
    switch(x){
  case  1:if (d>0){
        root1 = (-b  + sqrt(d))/(2*a);
        root2 = (-b  - sqrt(d))/(2*a);
        printf("%f%f",root1,root2);}
    break;
   case  2 :
   if (d==0){root1=root2=-b/2*a;
    printf("%f%f",root1,root2);}
    break;

case 3:
if (d<0){
    realpart= -b/2*a;
    imgpart =sqrt(-d)/2*a;

    printf("%f",root=realpart+imgpart);
    }
    }

     return 0;
}