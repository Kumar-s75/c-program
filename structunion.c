#include <stdio.h> 
#include <string.h> 
#include <stdbool.h> 
 typedef   union pokemon{// user defined data type
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    }pokemon;
int main(){
 
     pokemon pikachu;
    pikachu.attack=60;
    pikachu.hp=50;
    pikachu.speed=100;
    pikachu.tier='A';
strcpy(pikachu.name,"pikachu");

printf("%d\n",pikachu.attack);
printf("%d\n",pikachu.hp);
printf("%d\n",pikachu.speed);
printf("%c\n",pikachu.tier);
printf("%s\n",pikachu.name);



     return 0;
}