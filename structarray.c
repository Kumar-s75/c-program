#include <stdio.h> 
#include <string.h> 

int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    }pokemon;
    pokemon arr[10];
    strcpy(arr[0].name,"pikachu");
    arr[0].attack=50;
arr[0].speed=100;
arr[0].hp=500;
arr[0].tier='A';
strcpy(arr[1].name,"charizard");
    arr[1].attack=30;
arr[1].speed=10;
arr[1].hp=50;
arr[1].tier='B';
strcpy(arr[2].name,"mewtwo");
    arr[2].attack=150;
arr[2].speed=120;
arr[2].hp=90;
arr[2].tier='C';
for(int i=0;i<3;i++){
      printf("%s\n",arr[i].name);
    printf("Attack: %d\n",arr[i].attack);
      printf("Speed: %d\n",arr[i].speed);
        printf(" Hp: %d\n",arr[i].hp);
          printf(" Tier : %c\n",arr[i].tier);



}


     return 0;
}