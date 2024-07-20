#include <stdio.h> 


//     void fun(int *ptr)
// {
//  *ptr = 30;
// }
// int main()
// {
//  int y = 20;
//  fun(&y);
//  printf("%d", y);
//  return 0;
// }
// //  ouput =30
// int main()
// {
//  char *ptr = "GeeksQuiz";
//  printf("%cn", *&*&*ptr);
//  return 0;
//}
int main()
{
//  float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
//  float *ptr1 = &arr[0];
//  float *ptr2 = ptr1 + 3;
//  printf("%f ", *ptr2);
//  printf("%d", ptr2 - ptr1);
//  return 0; /*int takes 4 bytes, char takes 1 byte and pointer 
// takes 4 bytes.*/
int main()
{
 int arri[] = {1, 2 ,3};
 int *ptri = arri;
 char arrc[] = {1, 2 ,3};
 char *ptrc = arrc;
 printf("sizeof arri[] = %d ", sizeof(arri));
 printf("sizeof ptri = %d ", sizeof(ptri));
 printf("sizeof arrc[] = %d ", sizeof(arrc));
 printf("sizeof ptrc = %d ", sizeof(ptrc));
 return 0;}

}