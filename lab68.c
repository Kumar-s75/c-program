#include <stdio.h> 
#include <string.h> 
#include <direct.h> 
#include <conio.h> 

void main(){
    char pw[10];
    int x;
    printf("Enter password");
    for(x=0;x<10;x++)
    {
        pw[x]=getch();
        printf("*");
    }
    pw[x] ='\0';
    printf("\n");
    printf("you have passed the hidden password:");
    for(x=0;pw[x]!='\0';x++){
        printf("%c",pw[x]);

    }
    getch();
     
}