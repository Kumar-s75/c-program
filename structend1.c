#include <stdio.h> 
#include <string.h> 
int main(){
 typedef   struct student{
        int readingpower;
        int writingspeed;
        int IQ;
        char level;
        char name[10];
    }student;
    student arr[5];
    strcpy(arr[0].name,"Saurabh");
    arr[0].readingpower=95;
    arr[0].writingspeed=91;
    arr[0].IQ=97;
    arr[0].level='A';
     strcpy(arr[1].name,"Ankit");
    arr[1].readingpower=90;
    arr[1].writingspeed=91;
    arr[1].IQ=99;
    arr[1].level='A';
for(int i=0;i<2;i++){
    printf("%s\n",arr[i].name);
    printf("%d\n",arr[i].readingpower);
     printf("%d\n",arr[i].writingspeed);
      printf("%d\n",arr[i].IQ);
       printf("%c\n",arr[i].level);}
     return 0;
}