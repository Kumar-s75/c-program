#include <stdio.h> 

int main(){
    struct car{
        int dimensionandweight;
        int capacity;
        int Engineandtransmission;
        int suspensions;
    };
    struct car  a;
    a.dimensionandweight=95;
    a.capacity=91;
    a.Engineandtransmission=97;
    a.suspension=24;
   
     return 0;
}