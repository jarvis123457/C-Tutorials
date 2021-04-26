/* Q1: Write a program to print the address of a variable. Use this address to get the value of this variable.  */
#include<stdio.h>
int main(){
  int i=3;
  int *j=&i;
  printf("The address of i is %u\n", &i);
  printf("The value of i is %d\n" ,*j);
  return 0;
}
/*--------------------------------------------------------------------------------------------------------*/
/* Q2: Write a program having a variable i. Print the address of i. Pass this variable to a function and print its address. Are these addresses same? why?  */
#include<stdio.h>
void printAdd(int a);
int main(){
  int i=5;
  int *j=&i;
  printf("The value of i is %d\n", i);
  printAdd(i);
  printf("The address of i is %u\n", j);
  
  return 0;
}
void printAdd(int a){
  printf("The address of a is %u\n", &a);
}
//Both addresses are not same. Because the function stores the copy of i so address of copy is different from the address of original variable
/*-------------------------------------------------------------------------------------------------------------*/
/* Q3: Write a program to change the value of a variable to ten times of its current value. Write a function and pass the value by reference  */
#include<stdio.h>
void tentimes(int *a);
int main(){
  int i;
  printf("Enter the value of i\n");
  scanf("%d", &i);
  printf("The value of i is %d\n", i);
  tentimes(&i);
  printf("Ten times i is %d\n",i);
  return 0;
}
void tentimes(int *a){
  *a*=10;
}
/*--------------------------------------------------------------------------------------------------------------------*/
/* Q4: Write a program using function which calculates the sum and average of two numbers. Use pointers and print the values of sum and average in main().  */
#include<stdio.h>
void sumAndAvg(int a, int b, int *sum, float *avg);
int main(){
  int i,j, sum;
  float avg;
  i=3;
  j=6;
  sumAndAvg(i, j, &sum, &avg);
  printf("The value of sum is %d\n", sum);
  printf("The value of avg is %.2f\n", avg);
  return 0;
}
void sumAndAvg(int a, int b, int *sum, float *avg){
  *sum = a+b;
  *avg = (float)(a+b)/2;
}
/*----------------------------------------------------------------------------------------------------------------------*/
/* Q5: Write a program to print the value of a variable i by using "pointer to pointer" type variable. */
#include<stdio.h>
int main(){
  int i=6;
  int *j = &i;
  int **k = &j;
  int ***l= &k;
  printf("The value of variable i is %d\n", *j);
  printf("The value of variable i is %d\n", **k);
  printf("The value of variable i is %d\n", ***l);
  return 0;
}
/*-------------------------------------------------------------------------------------------------------------------*/
/* Q6: Try problem 3 using call by value and verify that it doesn't change the value of the said variable. */
#include<stdio.h>
int tentimes(int a);
int main(){
  int i;
  printf("Enter the value of i\n");
  scanf("%d", &i);
  printf("The value of i is %d\n", i);
  tentimes(i);
  printf("Ten times %d is %d\n",i,tentimes(i));
  return 0;
}
int tentimes(int a){
  int b;
  b=a*10;
  return b;
}
