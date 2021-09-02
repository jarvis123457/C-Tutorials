#include <stdio.h>
#include <stdlib.h>
int main(){
  /*
  realloc() function: 
  Sometimes the dynamically allocated memory is insufficient or more than required. so realloc is used to allocate memory of new size to a previously allocated ptr.*/
  int *ptr;
  ptr= (int *)malloc(6*sizeof(int));
  for(int i=0;i<6;i++){
    printf("Enter the value of %d element : ",i+1);
    scanf("%d",&ptr[i]);
    printf("\n");
  }
  for(int i=0;i<6;i++){
    printf("The value of %d element is : %d\n",i+1,ptr[i]);
  }
  ptr = realloc(ptr, 10*sizeof(int));
  for(int i=0;i<10;i++){
    printf("Enter the value of %d element : ",i+1);
    scanf("%d",&ptr[i]);
    printf("\n");
  }
  for(int i=0;i<10;i++){
    printf("The value of %d element is : %d\n",i+1,ptr[i]);
  }


  return 0;
}
