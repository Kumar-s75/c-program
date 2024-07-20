#include <stdio.h> 
void change(char str[]){
    int i;
    for(i=0;str[i+1]!='\0';i++){
        if(str[i]=='a')
        str[i+1]+='A'-'a';

    }
    printf("%s\n",str);
}
void main(){
    char s1[]="janardan";
    char s2[]="aabbaab";
    change(s1);
    change(s2);
}
     
