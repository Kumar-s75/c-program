#include <stdio.h> 
#include <string.h>
int main(){
    typedef struct cricketer{
        char firstname[20];
        char lastname[20];
        int age;
        int noofmatches;
        float averageruns;
        }cricketer;
cricketer arr[3];
        for(int i=0;i<3;i++){
        scanf("%s",arr[i].firstname,);
          scanf("%s",arr[i].lastname,);
            scanf("%d",&arr[i].age);
              
            scanf("%d",&arr[i].noofmatches);
            
            scanf("%f",&arr[i].averageruns);}
             for(int i=0;i<3;i++){
            printf("NAME :%s %s\n",arr[i].firstname,arr[i].lastname);
            
              printf("AGE :%d\n",arr[i].age);
          
              printf(" NO OF MATCHES PLAYED:%d\n",arr[i].noofmatches);
            
              printf("AVERAGE RUNS :%f\n\n",arr[i].averageruns);
            }
 return 0;
}