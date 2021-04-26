/* Q1: Write a program to print the address of a variable. Use this address to get the value of this variable.  */
#include<stdio.h>
int main(){
  int i=3;
  int *j=&i;
  printf("The address of i is %u\n", &i);
  printf("The value of i is %d\n" ,*j);
  return 0;
}
/*--------------------------------------------------------------------------------------------------------*/
/* Q2: Write a program having a variable i. Print the address of i. Pass this variable to a function and print its address. Are these addresses same? why?  */
#include<stdio.h>
void printAdd(int a);
int main(){
  int i=5;
  int *j=&i;
  printf("The value of i is %d\n", i);
  printAdd(i);
  printf("The address of i is %u\n", j);
  
  return 0;
}
void printAdd(int a){
  printf("The address of a is %u\n", &a);
}
//Both addresses are not same. Because the function stores the copy of i so address of copy is different from the address of original variable
/*-------------------------------------------------------------------------------------------------------------*/
