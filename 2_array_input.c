#include<stdio.h>
int main(){
  int marks[4];
  printf("Enter the value of marks for first student\n");
  scanf("%d", &marks[0]);
  printf("Enter the value of marks for second student\n");
  scanf("%d", &marks[1]);
  printf("Enter the value of marks for third student\n");
  scanf("%d", &marks[2]);
  printf("Enter the value of marks for fourth student\n");
  scanf("%d", &marks[3]);
  printf("You have entered %d, %d, %d, and %d\n", marks[0], marks[1], marks[2], marks[3]);
  return 0;
}
/*-----------------------------------------------------------------------------------------*/
/* Quick Quiz => Write a program to accept marks of five students in an array and print them to the screen.  */
#include<stdio.h>
int main(){
  int marks[5];
  for(int i=0;i<5;i++){
    printf("Enter the value of marks for student %d\n", i+1);
    scanf("%d", &marks[i]);
  }
  for(int i=0;i<5;i++){
    printf("Marks of student %d are %d\n",i+1,marks[i]);
  }
  
  return 0;
}
