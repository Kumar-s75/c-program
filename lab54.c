//NAME-KUMAR SAURABH
//ROLL NO-22110045(TT)
#include <stdio.h> 
int main(){
    int x,a,b,c,temp,celsius,fahrenheit,kelvin;
     printf("type 1 for converting celsius to fahrenheit\n");
      printf("type 2 for converting fahreinheit to celsius\n");
        printf("type 3 for converting celsius to kelvin\n");
         printf("Enter the value of choice x \n");
        scanf("%d",&x);
switch(x){ case 1:
        printf("Enter the value of temp in celsius\n");
        scanf("%d",&a);
        fahrenheit=(((9*a)/5)+32);
        printf("fahrenheit temp is : %d\n",fahrenheit); break;    
        case 2 :
        printf("Enter the value of temp in fahrenheit\n");
        scanf("%d",&b);
        celsius=5*(b-32/9);
        printf("celsius temp is : %d\n",celsius); break;
        case 3:
        printf("Enter the value of temp in celsius\n");
        scanf("%d",&c); kelvin = c +100 ;
        printf("kelvin temp is : %d\n",kelvin); break;}
 return 0;}