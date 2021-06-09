/* Write a program in C that can perform the subtraction of 2d array. */
#include <stdio.h>
int main(){
  int a[3][3];
  int b[3][3];
  int c[3][3];
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      printf("Enter the value of Element of Row %d and Column %d in array A.\n",i+1,j+1);
      scanf("%d",&a[i][j]);
      printf("Enter the value of Element of Row %d and Column %d in array B.\n",i+1,j+1);
      scanf("%d",&b[i][j]);
    }
  }
  printf("The Subtraction of array B from array A:  \n");
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      c[i][j]=a[i][j]-b[i][j];
      printf("Element of Row %d and Column %d :  %d\n",i+1,j+1,c[i][j]);
    }
  }
}
/*-------------------------------------------------------------------------------------*/
/* Write a program in C to multiply (2 matrix) 2d array, use your mathematics concepts for implementing the matrices multiplication formula. */
#include <stdio.h>
int main(){
  int a[3][3];
  int b[3][3];
  int c[3][3];
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      printf("Enter the value of Element of Row %d and Column %d in array A.\n",i+1,j+1);
      scanf("%d",&a[i][j]);
      printf("Enter the value of Element of Row %d and Column %d in array B.\n",i+1,j+1);
      scanf("%d",&b[i][j]);
    }
  }
  printf("The Multplication of array B from array A:  \n");
  for(int i=0;i<3;i++){
    printf("[");
    for(int j=0;j<3;j++){
      c[i][j]=0;
      for(int k=0;k<3;k++){
        c[i][j]+=a[i][k]*b[k][j];
      }
      printf("%3d",c[i][j]);
    }
    printf(" ]");
    printf("\n");
  }
}
