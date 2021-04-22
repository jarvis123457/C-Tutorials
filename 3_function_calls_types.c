/* We call a function by passing "arguments". There are two types of function calls:
i: Call by Value => Sending values of arguments
ii: Call by reference => Sending the address of arguments  */
// Example of call by value function call
#include<stdio.h>

int sum(int a, int b);
int main(){
  int a=4,b=7;
  printf("The value of a and b is %d and %d\n", a, b);
  printf("The value of 4+7 is %d\n", sum(a,b));
  printf("The value of a and b is %d and %d\n", a, b);
  return 0;
}
int sum(int a, int b){
  int c;
  c = a+b;
  b=3434;
  a=23432;
  return c;
}
/*--------------------------------------------------------------------------------------------------------------*/
// Example of Call by reference function
#include<stdio.h>

void swap(int *a, int *b);
void wrongswap(int a, int b);
int main(){
  int a=3, b=4;
  printf("The value of a and b before swap %d and %d\n", a, b);
  // wrongswap(a, b);
  swap(&a,&b);
  printf("The value of a and b after swap %d and %d\n", a, b);
  return 0;
}
void wrongswap(int a, int b){
  int temp;
  temp = a;
  a=b;
  b=temp;
//Wrongswap will not work because it calls by value so it does not changes variables's values but their copies's values.
}
void swap(int *a, int *b){
  int temp;
  temp = *a;
  *a=*b;
  *b=temp;
//This works because of call by reference
// You can modify the value of a variable using & and * operator.
}
