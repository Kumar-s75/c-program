#include <stdio.h> 

int main(){
    struct student{
        int readingpower;
        int writingspeed;
        int IQ;
        char level;
    };
    struct student saurabh;
    saurabh.readingpower=95;
    saurabh.writingspeed=91;
    saurabh.IQ=97;
    saurabh.level='A';
    printf("saurabh\n");
    printf("%d\n",saurabh.readingpower);
     printf("%d\n",saurabh.writingspeed);
      printf("%d\n",saurabh.IQ);
       printf("%c\n",saurabh.level);
     return 0;
}