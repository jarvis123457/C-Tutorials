/* Quick Quiz => Write a program to demonstrate the use of free with malloc. */
#include <stdio.h>
#include <stdlib.h>
int main(){
  /*
  free() function: We can use free function to deallocate the memory.*/
  int *ptr, *ptr2;
  ptr= (int *)malloc(6*sizeof(int));
  for(int i=0;i<600;i++){
    ptr2= (int *)malloc(600000*sizeof(int));
    printf("Enter the value of %d element : ",i+1);
    scanf("%d",&ptr[i]);
    printf("\n");
    free(ptr2);
  }
  for(int i=0;i<6;i++){
    printf("The value of %d element is : %d\n",i+1,ptr[i]);
  }


  return 0;
}
