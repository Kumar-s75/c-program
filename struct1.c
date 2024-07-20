#include <stdio.h> 

int main(){
    struct pokemon{// user defined data type
        int hp;
        int speed;
        int attack;
        char tier;
    };
    struct pokemon pikachu;
    pikachu.attack=60;
    pikachu.hp=50;
    pikachu.speed=100;
    pikachu.tier='A';
        struct pokemon chariazard;
    chariazard.attack=130;
    chariazard.hp=80;
    chariazard.speed=80;
    chariazard.tier='S';
    printf("pikachu");
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.speed);
    printf("%c\n",pikachu.tier);
    printf("chariazard");
      printf("%d\n",chariazard.attack);
    printf("%d\n",chariazard.hp);
    printf("%d\n",chariazard.speed);
    printf("%c\n",chariazard.tier);


     return 0;
}