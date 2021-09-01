/*                            PRACTICE SET                                      */
/* Problem 1: Write a program to read three integers from a file.  */
#include <stdio.h>

int main(){
  int a,b,c;
  FILE *ptr;
  ptr = fopen("7_practice_set_problem1.txt", "r");
  fscanf(ptr, "%d %d %d", &a, &b, &c);
  printf("The value of a, b and c is %d, %d, and %d respectively\n",a,b,c);
  return 0;
}
/*--------------------------------------------------------------------------------------*/
