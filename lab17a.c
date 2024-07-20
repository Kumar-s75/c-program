#include <stdio.h> 

int main(){
    int a,num=1,table;
    printf("Enter the value of a\n");
    scanf("%d",&a);

    while(num<=10 ){
        
         table= a*num;
        printf(" %d *%d=%d\n",a,num,table);
        num++;
        
    }



     return 0;
}