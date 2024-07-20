// NAME-KUMAR SAURABH
// ROLL NO-22110045(TT)
#include <stdio.h> 
int main(){int   a,b,c,d,e ,marks,average,sum;
     printf("Enter the marks of subject a \n");
    scanf("%d",&a);
    printf("Enter the marks of subject b \n");
    scanf("%d",&b);
    printf("Enter the marks of subject c \n");
    scanf("%d",&c);
    printf("Enter the marks of subject d \n");
    scanf("%d",&d);
    printf("Enter the marks of subject e \n");
    scanf("%d",&e);sum=a+b+c+d+e;
    average=sum/5;
  printf("The average is %d \n",sum/5);
     if (average>=90){ printf("S grade");}
     else if(average>=80){printf("A grade");
 }  else if(average>=70){printf("B grade"); }
       else if(average>=60){printf("C grade"); }
       else if(average>=50){printf("D grade");}
       else if(average>=40){ printf("E grade"); }
       else if(average<40){printf("FAIL");}
      return 0;} 