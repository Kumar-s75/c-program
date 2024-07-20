#include <stdio.h> 

int main(){
    char str[20]="CollegeWallah";
    int i=0;
    while (str[i]!='\0'){
        printf("%c",str[i]);//printf("%c",*(str+i));
//printf("%c",*(i+str));
//printf("%c",i[str]);


i++;
    }

     return 0;
}