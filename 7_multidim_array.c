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
