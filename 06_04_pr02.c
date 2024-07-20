 //Write a program having a variable i.print the address of  i.pass the variable to a function and print its address.Are these addresses same?why?
 #include <stdio.h> 
 void printAdd(int a){
 printf("The address of a variable a is %u",&a);
 }


int main(){
    int i =4;
    int *ptr;
    ptr= &i;
    printf("The value of variable i is %d\n",i);
    printAdd(i);
printf("The address of variable i is %u\n",&i);


     return 0;
}