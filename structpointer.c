#include <stdio.h> 
#include <string.h> 
#include <stdbool.h> 
typedef struct pokemon{
    int hp;
    int speed;
    int attack;
    char tier;
    char name [15];
}pokemon;

int main(){
    pokemon pikachu;
    pokemon *x=&pikachu;
    printf("%p",x);
     return 0;
}