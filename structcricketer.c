#include <stdio.h> 
#include <string.h>
int main(){
    typedef struct cricketer{
        char name[20];
        int age;
        int noofmatches;
        float averageruns;
        }cricketer;
cricketer arr[3];
        for(int i=0;i<3;i++){
            printf("Enter name of cricketer %d :",i+1);
            scanf("%s",arr[i].name);
              printf("Enter age of cricketer %d :\n",i+1);
            scanf("%d",&arr[i].age);
              printf("Enter no  of mathes played of cricketer %d :\n",i+1);
            scanf("%d",&arr[i].noofmatches);
              printf("Enter average runs  of cricketer %d :\n",i+1);
            scanf("%f",&arr[i].averageruns);}
             for(int i=0;i<3;i++){
            printf("NAME :%s\n",arr[i].name);
            
              printf("AGE :%d\n",arr[i].age);
          
              printf(" NO OF MATCHES PLAYED:%d\n",arr[i].noofmatches);
            
              printf("AVERAGE RUNS :%f\n\n",arr[i].averageruns);
            }
 return 0;
}