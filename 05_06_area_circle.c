//use the library func to calculate the area of a square of side a.
#include <stdio.h>
#include<math.h>  


int main(){
    int side;
    printf("Enter the value of side\n");
    scanf("%f, &side");

    printf("The value of area is %f", pow(side, 2));
    // pow func is a double value function so we use F WITH IT.
     return 0;
}