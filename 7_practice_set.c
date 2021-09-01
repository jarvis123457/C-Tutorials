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
