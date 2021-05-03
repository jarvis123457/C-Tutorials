/* Task 1: Write a C Program that takes 2 number input from user and swap those numbers, Using function Swap(a,b) */
#include<stdio.h>
void swap(int a, int b);
int main(){
  int a,b;
  printf("Enter Value of a: ");
  scanf("%d",&a);
  printf("Enter Value of b: ");
  scanf("%d",&b);
  swap(a, b);
  return 0;
}
void swap(int a, int b){
  int c;
  c=a;
  a=b;
  b=c;
  printf("The value of a after change is %d\n",a);
  printf("The value of b after change is %d\n",b);
}
/*-------------------------------------------------------------------------------------------------*/
/* Task 2: Write a C Program that computes the cube of a number taken as an input from user, Using function cube(n).*/
#include<stdio.h>
int cube(int n);
int main(){
  int n;
  printf("Enter Value of n: ");
  scanf("%d",&n);
  int b = cube(n);
  printf("The cube of %d is %d", n, b);
  return 0;
}
int cube(int n){
  int a;
  a=n*n*n;
  return a;
}
/*----------------------------------------------------------------------------------------------*/
/* Task 3: Write a Program for basic calculator that inputs number from user and performs basic tasks of calculation (+,-,*,/), using functions. */
#include<stdio.h>
float sum(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);
int main(){
  float a;
  float b;
  int c;
  printf("Enter Value of a\n");
  scanf("%f",&a);
  printf("Enter Value of b\n");
  scanf("%f",&b);
  printf("Press\n 1) To Add a to b\n 2) To Subtract a from b\n 3) To multiply a to b\n 4) To divide b by a\n");
  scanf("%d", &c);
  if (c==1){
    printf("The sum of %.2f and %.2f is %.2f\n", a, b, sum(a,b));
  }
  else if (c==2){
    printf("The difference of %.2f from %.2f is %.2f\n", a, b, subtract(a,b));
  }
  else if (c==3){
    printf("The multiplication of %.2f and %.2f is %.2f\n", a, b, multiply(a,b));
  }
  else if (c==4){
    printf("The division of %.2f by %.2f is %.2f\n", b, a, divide(a,b));
  }
  else{
    printf("Please enter the correct value(1,2,3,4) to select arithmetic operator\n");
    printf("Run the program again\n");
  }
  return 0;
}
float sum(float a, float b){
  return a+b;
}
float subtract(float a, float b){
  return b-a;
}
float multiply(float a, float b){
  return a*b;
}
float divide(float a, float b){
  return b/a;
}
