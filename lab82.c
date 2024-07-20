// Online C compiler to run C program online
#include <stdio.h> 

int main(){
    int a,num,table;
    printf("Enter the value of a\n");
    scanf("%d",&a);

    for( num=11;--num;){
        
         table= a*num;
        printf(" %d *%d=%d\n",a,num,table);
      
        
    }



     return 0;
}