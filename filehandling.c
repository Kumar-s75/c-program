#include <stdio.h> 

int main(){
    // FILE*ptr=fopen("saurabh.txt","r");
    // char str[100];
    // if (fgets(str,120,ptr)!=NULL)
    // printf("%s",str);
    
    FILE* ptr=fopen("CW.txt","w");//creating a file
    char str[]="placement lagegi yahi se";
    fputs(str,ptr);
    fclose(ptr);
}