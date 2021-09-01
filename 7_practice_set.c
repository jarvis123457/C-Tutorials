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
/* Problem 2: Write a program to generate multiplication table of a given nnumber in text format. Make sure that the file is readable and well-formatted.  */
#include <stdio.h>

int main(){
  FILE *ptr;
  ptr = fopen("7_practice_set_problem2.txt", "w");
  printf("Enter the integer you need the table for: ");
  int num;
  scanf("%d",&num);
for(int i=0;i<20;i++){
  fprintf(ptr,"%d Multiplied By %d = %d\n",num,i+1,num*(i+1));
}
  fclose(ptr);
  printf("Successfully generated table of %d\n",num);
  return 0;
}
/*----------------------------------------------------------------------------------*/
/* Problem 3: Write a program to read a text file character by character and write its content twice in a separate file  */
#include <stdio.h>

int main(){
  char c;
  FILE *ptr1;
  FILE *ptr2;
  ptr1 = fopen("7_practice_set_problem3_1.txt", "r");
  ptr2 = fopen("7_practice_set_problem3_2.txt", "w");
  c=fgetc(ptr1);
  while(c!=EOF){
    fputc(c, ptr2);
    c=fgetc(ptr1);
  }
  fputc('\n', ptr2);
  rewind(ptr1);
  c=fgetc(ptr1);
  while(c!=EOF){
    fputc(c, ptr2);
    c=fgetc(ptr1);
  }
  fclose(ptr1);
  fclose(ptr2);
  return 0;
}
/*--------------------------------------------------------------------------------*/
/* Problem 4: Take name and salary of two employees as input from the user and write them to a text file in the following format
  name1, 3300
  name2, 7700  */
#include <stdio.h>
#include <string.h>
int main(){
  char c[20],d[20];
  int a,b;
  printf("Enter Name Of Employee 1\n");
  gets(c);
  printf("Enter Name Of Employee 2\n");
  gets(d);
  printf("Enter Salary Of Employee 1\n");
  scanf("%d",&a);
  printf("Enter Salary Of Employee 2\n");
  scanf("%d",&b);
  FILE *ptr;
  ptr = fopen("7_practice_set_problem4.txt", "w");
  fprintf(ptr, "%s has Salary: %d",c,a);
  fputc('\n', ptr);
  fprintf(ptr, "%s has Salary: %d",d,b);
  fclose(ptr);
  return 0;
}
/*----------------------------------------------------------------------------------*/
/* Problem 5: Write a program to modify a file containing an integer to double its value
  name1, 3300
  name2, 7700  */
#include <stdio.h>
#include <string.h>
int main(){
  int a;
  FILE *ptr;
  ptr = fopen("7_practice_set_problem5.txt", "r");
  fscanf(ptr, "%d",&a);
  printf("%d",a);
  ptr = fopen("7_practice_set_problem5.txt", "w");
  fprintf(ptr, "%d",2*a);
  fclose(ptr);
  return 0;
}
/*--------------------------------------------------------------------------------*/
