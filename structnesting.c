#include <stdio.h> 

int main(){
  typedef  struct pokemon{// user defined data type
        int hp;
        int speed;
        int attack;
        char tier;
    }pokemon;

       
        typedef struct legendarypokemon {
pokemon normal;
char  abillity[10];
        }legendarypokemon;
        legendarypokemon mewtwo;
        strcpy(mewtwo.ability,"pressure");
        mewtwo.normal.hp=150;
        mewtwo.normal.attack=150;
        strcpy(mewtwo.normal.name,"mewtwo");
        mewtwo.normal.speed=150;
        mewtwo.normal.tier='A';
              typedef struct godpokemon {
legendarypokemon legend;
int specialattack;
        }godpokemon;
     godpokemon arceus;
     arceus.specialattack=170;
     strcpy(arceus.legend.abillity,"turn anyone into stone");
     arceus.legend.normal.attack=500;

     return 0;
}