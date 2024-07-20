#include <stdio.h> 

int main(){
    for(int i=1;i<=10;i++){
        if(i==6){
            continue;//skip
            printf("%d\n",i);
        }
    }
     return 0;
}
//print all nos from 1 to 10 except 6.