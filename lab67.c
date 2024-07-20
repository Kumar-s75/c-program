#include <stdio.h> 
#include <conio.h> 

int main(){
    char ch[6]={0};int x;
    for(x=0;x<5;x++){
        ch[x]=getch();
    }
    printf("Received 5 character  input: %s\n", ch);
   
     return 0;
}
