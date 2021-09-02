/*                                Problem Set                                 */
/* Problem 1 => Write a program to dynamically create an array of size 6 capable of storing 6 integers. */
/* Very Easy */
/*---------------------------------------------------*/
/* Problem 2 => Use the array in problem 1 to store 6 integers entered by the user. */
/* Already Done */
/*--------------------------------------------------*/
/* Problem 3 => Solve Problem 1 Using Calloc(). */
/* Already Done */
/* -------------------------------------------------*/ 
/* Problem 4 => Create an array dynamically capable of storing 5 integers. Now use realloc so that it can now store 10 integers. */
/* Already Done */
/*----------------------------------------------------*/
/* Problem 5 => Create an array of multiplication table of 7 upto 10. Use Realloc to make it store 15 numbers. */
#include <stdio.h>
#include <stdlib.h>
int main(){
  int *ptr;
  ptr= (int *)malloc(10*sizeof(int));
  for(int i=0;i<10;i++){
    ptr[i]=7*(i+1);
  }
  printf("Multiplication Table of 7\n");
  for(int i=0;i<10;i++){
    printf("7 X %d = %d\n",i+1,ptr[i]);
  }
  ptr = realloc(ptr, 15*sizeof(int));
  for(int i=0;i<15;i++){
    ptr[i]=7*(i+1);
  }
  printf("Multiplication Table of 7\n");
  for(int i=0;i<15;i++){
    printf("7 X %d = %d\n",i+1,ptr[i]);
  }


  return 0;
}
/*------------------------------------------------------------------*/
/* Problem 6 => Attempt Problem 4 using calloc()  */
