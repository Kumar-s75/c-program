#include <stdio.h> 
#include <string.h> 

int main(){
   // char str[]="collegewallah";
   // char *ptr= str;
   // int i=0;
   // printf("%p\n",&str[0]);
    //printf("%p",str);//ptr now points to str[0]
   //// while(*ptr!='\0'){
      //  printf("%c",*ptr);
      //  ptr++;
     //   i++;
  //  }
   //  char *ptr="collegewallah";
   //  ptr[0]='d';//read only behaviour
   //  printf("%c",*ptr);
    
    char *ptr="collegewallah";
    ptr="physicswallah";
    printf("%s",ptr);
    char str[]="collegewallah";
    char *ptr="str";
    ptr="physicswallah";
    printf("%s",str);
    char *p=str;
    *p='p';
    printf("%s",str);
    
     return 0;
}