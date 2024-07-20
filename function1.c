#include <stdio.h> 
void indian ();
void french ();
char NATIONALITY,c;

int main(){
printf("ENTER YOUR NATIONALITY\n");
scanf("%c",&NATIONALITY);
   
    if(c=='i'){
        indian();

    }
    else if(c=='f'){
        french();

    }
    else{
        printf("u r @gandu");

    }

    

     return 0;
}
void indian(){
    printf("NAMASTE\n");
     
}

void french (){
    printf(" HELLO\n");
    
}

