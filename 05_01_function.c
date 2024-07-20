#include <stdio.h>
void display();//function prototype 

int main(){
    int a;
    printf("initializing display function\n");
    display();//function call
    printf("Display function finished its work\n");
    return 0;
    
     
}//function display
void display(){
    printf("This is Display\n");
}