//create a struc 'date' that contains three members namely date ,month and year.create two structure
//variables with different date and now compare the two. if the dates are equal then display message as "equal" otherwise "unequal".
//and now create another structure variable by assigning first date to it.compare first and third date.
#include <stdio.h> 
#include <string.h> 
#include <stdbool.h> 
int main(){
    typedef struct date{
int day;
int month;
int year;
}date;
date a,b;//a->5/12/1999 b-> 27/12/2002
a.day=5;
a.month=12;
a.year=1999;
b.day=27;
b.month=12;
b.year =2002;

bool flag = true;
if(a.day!=b.day) flag =false;
if(a.month!=b.month) flag =false;
if(a.year!=b.year) flag =false;
if(flag==true){printf("The dates are same\n");}
else{printf("The dates are different\n");}

date c;
c=a;

bool flag1= true;
if(a.day!=c.day) flag1 =false;
if(a.month!=c.month) flag1 =false;
if(a.year!=c.year) flag1 =false;
if(flag1==true){printf("The dates are same");}
else{printf("The dates are different");}



     return 0;
}
