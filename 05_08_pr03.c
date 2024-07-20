#include <stdio.h> 
float force(float mass);

int main(){
    float m;
    printf("Enter the value of mass in kgs\n");
    scanf("%f",&m);
    printf("The value of Force in newton is  %.2f\n",force(m));

    // by writing %.1f ,%.2f we can choose the the no of decimal digits in the output, and get output as 98.0,98.oo
     return 0;
}
float force(float mass){
    float result = mass*9.8;
    return result;
}