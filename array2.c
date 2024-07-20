//write a program to print price of 3 items and print their final cost with gst
#include <stdio.h> 

int main(){
    float price[3];
    printf("Enter value of price1: ");
    scanf("%f",&price[0]);
        printf("Enter value of price2: ");
    scanf("%f",&price[1]);
        printf("Enter value of price3: ");
    scanf("%f",&price[2]);
    printf("total price 1 :%f\n",price[0]+(0.18*price[0]));
    printf("total price 2 :%f\n",price[1]+(0.18*price[1]));
    printf("total price 3 :%f",price[2]+(0.18*price[2]));



     return 0;
}