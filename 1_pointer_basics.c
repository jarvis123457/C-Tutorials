/* A pointer is a variable which stores the address of another variable. if a variable j points to i matlab j has stored i's address. & is "address of" operator. It is used to obtain address of the variables in memory blocks.  Format specifier for address is "%u.  
"*" is the "value at address" operator used to obtain the value of integer stored at some address a. 
We declare a pointer using [int *j] j stores address of variables and for example j=&i now j stores address of i.
int *ch-ptr  pointer-integer
char *ch-ptr pointer-character
float *ch-ptr pointer-float  */
#include<stdio.h>

int main(){
  int i = 32;
  int *j=&i;
  printf("The value of i is %d\n", i);
  printf("The value of i is %d\n", *j);
  printf("The Address of i is %u\n", &i);
  printf("The Address of i is %u\n", j);
  printf("The Address of j is %u\n", &j);
  printf("The Value of j is %u\n", *(&j));

  return 0;
}
