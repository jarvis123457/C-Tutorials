#include <stdio.h>
#include <stdlib.h>
int main(){
  /*
  calloc() => continuous allocation. It initializes each memory block with a default value of 0.*/
  float *ptr;
  ptr= (float *)calloc(6,sizeof(float));
  for(int i=0;i<6;i++){
    printf("Enter the value of %d element : ",i+1);
    scanf("%f",&ptr[i]);
    printf("\n");
  }
  for(int i=0;i<6;i++){
    printf("The value of %d element is : %f\n",i+1,ptr[i]);
  }


  return 0;
}
/*---------------------------------------------------------------------------------------------------*/
/* Quick Quiz => Write a program to create and array of size n using calloc where n is an integer entered by the user. */
#include <stdio.h>
#include <stdlib.h>
int main(){
  int n;
  int *ptr;
  printf("Enter the number of elements in the array.\n");
  scanf("%d",&n);
  ptr= (int *)calloc(n,sizeof(int));
  for(int i=0;i<n;i++){
    printf("Enter the value of %d element : ",i+1);
    scanf("%d",&ptr[i]);
    printf("\n");
  }
  for(int i=0;i<n;i++){
    printf("The value of %d element is : %d\n",i+1,ptr[i]);
  }


  return 0;
}
