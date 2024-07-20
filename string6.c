#include <stdio.h> 
#include <string.h> 

int main(){
    char str[10];
 //   scanf("%s",str);//only the first word will be considered
  //  gets(str);//entire sentence can be input
    scanf("%[^\n]s",str);//entire sentence can be input
 printf("your input was :%s",str);
     return 0;
}