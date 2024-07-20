#include <stdio.h> 
enum days{MONDAY=1,TUESDAY,WEDNESDAY,THRUSDAY,FRIDAY,SATURDAY,SUNDAY};
int main(){
    int day,d;
  enum days d;
  d=monday;
    switch(d)
    {
    case 1:
    printf("MONDAY");
    break;
    
    case 2:
    printf("TUESDAY");
   break;
     case 3:
    printf("WEDNESDAY");
   break;
     case 4:
    printf("THRUSDAY");
    break;
     case 5:
    printf("FRIDAY");
    break;
     case 6:
    printf("SATURDAY");
    break;
     case 7:
    printf("SUNDAY");
    break;
     
    default:
    printf("invalid input");
    }


     return 0;
}