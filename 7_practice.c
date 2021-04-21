/* Q1: Write a program using functions to find average of three numbers */
#include<stdio.h>
float avg(int a, int b, int c);
int main(){
  int a, b, c;
  printf("Enter three numbers you want to take average of a\n");
  scanf("%d", &a);
  printf("Enter three numbers you want to take average of b\n");
  scanf("%d", &b);
  printf("Enter three numbers you want to take average of c\n");
  scanf("%d", &c);
  printf("The average of a, b and c is %f", avg(a,b,c));
  
  return 0;
}

float avg(int a, int b, int c){
  float result;
  result =(float)(a+b+c)/3;// Type casting result into float
  return result;
}
/*--------------------------------------------------------------------*/
/* Q2: Write a function to convert celsius temperature into fahrenheit. */
#include<stdio.h>
float convert(float C);
int main(){
  int C;
  printf("Enter Temperature in Celsius\n");
  scanf("%d", &C);
  printf("%d degrees Celsius is %f degrees fahrenheit.\n",C,convert(C));
  return 0;
}
float convert(float C){
  float F;
  F = (C*9/5+32);
  return F;
}
/*-------------------------------------------------------------------------*/
/* Q3: Write a function to calculate the force of attraction on a body of mass m exerted by Earth(g=9.8m/s^2). */
#include<stdio.h>
float weight(float m);
int main(){
  int m;
  printf("Enter mass in kg.\n");
  scanf("%d", &m);
  printf("The weight of mass %d kg is %.0f Newtons .\n",m,weight(m));// How many decimal places of float you want. Lets say n so you use %.nf for no decimal places %.0f
  return 0;
}
float weight(float m){
  float W;
  W = m*9.8;
  return W;
}
/*--------------------------------------------------------------------------*/
/* Q4: Write a program using recursion to calculate nth element of the fibonacci series. */
#include<stdio.h>
int fibonacci(int n);
int main(){
  int n;
  printf("Enter the value of n\n");
  scanf("%d", &n);
  printf("The %dth term is %d.\n",n,fibonacci(n));
  return 0;
}
int fibonacci(int n){
  if(n==1){
    return 0;
  }
  else if(n==2){
    return 1;
  }
  else{
    return fibonacci(n-1)+fibonacci(n-2);
  }
}
/*-----------------------------------------------------------------------------------*/
/* Q5: What will the following line produce in a C program.
 a=0
 printf("%d %d %d\n", a, ++a, a++) */
#include<stdio.h>
int main(){
  int a=3;
  printf("%d %d %d\n", a,++a, a++) ;//This will print 5 5 3 because compiler reads arguments from right to left.
  return 0;
}
/*------------------------------------------------------------------------------------*/
/* Q6: Write a recursive function to calculate the sum of first n natural numbers. */
#include<stdio.h>
int sum(int n);
int main(){
  printf("Enter the value of n\n");
  int n;
  scanf("%d", &n);
  printf("The sum of first %d natural numbers is %d\n",n,sum(n));
  return 0;
}
int sum(int n){
  if(n==1){
  return 1;
  }
  else{
    return n+sum(n-1);
  }
}
/*--------------------------------------------------------------------------------------*/
/* Q7: Write a program using functions to print the following pattern(first n lines).
*
* * *
* * * * *                                          */
#include<stdio.h>
void printPattern(int n);
int main(){
  int n=4;
  printPattern(n);
  return 0;
}
/* for n=3
*
***
*****  */
void printPattern(int n){
  if(n==1){
    printf("*\n");
    return;
  }
  printPattern(n-1);
  int i;
  for(i=0;i<(2*n-1);i++){
    printf("*");
  }
  printf("\n");
}
/*---------------------------------------------------------------------------*/
/*Q8: Solve 7 using for loop*/
