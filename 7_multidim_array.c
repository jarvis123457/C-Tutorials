#include <stdio.h>

int main(){
  int n_students, n_subjects;
  printf("Enter number of subjects each student appears for: \n");
  scanf("%d", &n_subjects);
  printf("Enter number of students: \n");
  scanf("%d", &n_students);
  int marks[n_students][n_subjects];
  for(int i=0;i<n_students;i++){
    for(int j=0;j<n_subjects;j++){
      printf("Enter the marks of student %d for subject %d\n", i+1,j+1);
      scanf("%d", &marks[i][j]);
    }
  }
  for(int i=0;i<n_students;i++){
    for(int j=0;j<n_subjects;j++){
      printf("The marks of student %d for subject %d are %d\n", i+1,j+1, marks[i][j]);
      
    }
  }
// How to print complete array as matrix form.
  return 0;
}
/*------------------------------------------------------------------------------------*/
/* Create a 2D array by taking input from the user. Write a function to print the content of this 2D array on the screen*/
#include <stdio.h>
void printArray(int a,int b,int ptr[a][b]);
int main(){
  int a, b;
  printf("Enter the value of a\n");
  scanf("%d", &a);
  printf("Enter the value of b\n");
  scanf("%d", &b);
  int arr[a][b];
  for(int i=0;i<a;i++){
    for(int j=0;j<b;j++){
      printf("Enter the value of element of row %d and column %d\n", i+1, j+1);
      scanf("%d", &arr[i][j]);
    }
  }
  printArray(a, b,arr);
  return 0;
}
void printArray(int a,int b,int ptr[a][b]){
  for(int i=0;i<a;i++){
    for(int j=0;j<b;j++){
      printf("The value of element of row %d and column %d is %d\n", i+1, j+1, ptr[i][j]);
    }
  }
}
