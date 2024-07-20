#include <stdio.h> 

int main(){
    int i, marks[10], evencount=0,oddcount=0;
    for(i=0;i<10;i++){
        printf("Enter the value of marks for students %d: ",i+1);
        scanf("%d",&marks[i]);
    }
    // for(i=0;i<10;i++){
    //     printf("The value of marks are :%d\n",marks[i]);
    // }
    for(i=0;i<10;i++){
        if(marks[i]%2==0){
            evencount++;
 }
 else{
    oddcount++;
 }
    }
 printf("Total even numbers =%d\n",evencount);
  printf("Total odd numbers =%d",oddcount);
    
     return 0;
}