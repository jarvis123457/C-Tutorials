#include <stdio.h>
#include <stdlib.h>
int main(){
  /*
  Functions for DMA in C:
  (1)malloc()
  malloc => memory allocation. Takes number of bytes to be allocated as an input and retyrns a pointer of type void.
  */
  int *ptr;
  // printf("The size of int on my IDE is %lu\n", sizeof(int));
  // printf("The size of char on my IDE is %lu\n", sizeof(char));
  // printf("The size of float on my IDE is %lu\n", sizeof(float));
  ptr= (int *)malloc(6*sizeof(int));
  for(int i=0;i<6;i++){
    printf("Enter the value of %d element : ",i+1);
    scanf("%d",&ptr[i]);
    printf("\n");
  }
  for(int i=0;i<6;i++){
    printf("The value of %d element is : %d\n",i+1,ptr[i]);
  }


  return 0;
}
/*---------------------------------------------------------------------------------------------------------*/
/* Quick Quiz => Write a program to create a dynamic array of 5 floats using malloc() */
#include <stdio.h>
#include <stdlib.h>
int main(){
  float *ptr;
  ptr= (float *)malloc(5*sizeof(float));
  for(int i=0;i<5;i++){
    printf("Enter the value of %d element : ",i+1);
    scanf("%f",&ptr[i]);
    printf("\n");
  }
  for(int i=0;i<5;i++){
    printf("The value of %d element is : %f\n",i+1,ptr[i]);
  }


  return 0;
}
