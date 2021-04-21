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

