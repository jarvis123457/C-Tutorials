/*                         Practice Problems                                  */
/* Question 1 => Create a two dimensional vector using structures in C        */
#include<stdio.h>

struct vector{
  int x;
  int y;
};

int main(){
  struct vector v1, v2;
  v1.x = 34;
  v1.y = 54;
  printf("X dim is %d and Y dim is %d\n", v1.x, v1.y);  
  return 0;
}
/*--------------------------------------------------------------------------*/
/* Question 2 => Write a function sumvector which returns the sum of two vectors passed to it. The vectors must be two-dimensional.        */
#include<stdio.h>

struct vector{
  int x;
  int y;
};
struct vector sumVector(struct vector v1, struct vector v2);


int main(){
  struct vector v1, v2, sum;
  v1.x = 34;
  v1.y = 54;
  printf("X dim is %d and Y dim is %d\n", v1.x, v1.y);
  v2.x=5;
  v2.y=4;
  sum = sumVector(v1,v2);
  printf("X dim is %d and Y dim is %d\n", sum.x, sum.y);
  return 0;
}
struct vector sumVector(struct vector v1, struct vector v2){
  struct vector result;
  result.x=v1.x+v2.x;
  result.y=v1.y+v2.y;
  return result;
}
/*---------------------------------------------------------------------------------------------*/
/* Question 3 => Twenty integers are to be stored in memory what will you prefer?        */
/* Answer = Array -> Because the data type is similar not different types of variables are involved. */
/*-------------------------------------------------------------------------------------------------*/
/* Question 4 => Write a program to illustrate the use of arrow operator in C        */
#include<stdio.h>
#include<string.h>
struct vector{
  int x;
  int y;
};


int main(){
  struct vector *v1, *v2,v3;
  (*v1).x = 34;
  (*v1).y = 54;
  printf("X dim is %d and Y dim is %d\n", (*v1).x, (*v1).y);
  v2 = &v3;
  v2->x=34;
  v2->y=54;
  printf("X dim is %d and Y dim is %d\n", (*v2).x, (*v2).y);
  return 0;
}
/*---------------------------------------------------------------------------------------------------*/
/* Question 5 => Write a program with a structure representing a complex number.        */
#include<stdio.h>
#include<string.h>
typedef struct complex{
  int a;
  int b;
}cmp;


int main(){
  cmp x,y,z;
  x.a=6;
  x.b=4;
  y.a=3;
  y.b=9;
  z.a=3;
  z.b=3;
  printf("Complex number => x = %d + i*%d\n",x.a,x.b);
  printf("Complex number => y = %d + i*%d\n",y.a,y.b);
  printf("Complex number => z = %d + i*%d\n",z.a,z.b);
  return 0;
}
/*-----------------------------------------------------------------------------------*/
/* Question 6 => Create an array of 5 complex numbers created in problem 5 and display them with the help of a display function. The values must be taken as an input from the user.        */
#include<stdio.h>
#include<string.h>
typedef struct complex{
  int a;
  int b;
}cmp;

void displaycnums(cmp arr[], int n);
int main(){
  cmp cnums[5];
  for(int i=0;i<5;i++){
    printf("Enter the real value for Complex Number : %d\n", i+1);
    scanf("%d",&cnums[i].a);
    printf("Enter the imaginary value for Complex Number : %d\n", i+1);
    scanf("%d",&cnums[i].b);
  }
  displaycnums(cnums, 5);
  return 0;
}
void displaycnums(cmp arr[], int n){
  for(int i=0;i<n;i++){
    printf("The Complex number => %d = %d + %di\n",i+1,arr[i].a,arr[i].b);
  }
}
/*---------------------------------------------------------------------------------------*/
/* Question 7 => Write problem 5's structure using typedef keyword.        */
/*---------------------------------------------------------------------------------------*/
/* Question 8 => Create a structure representing a bank account of a customer. What Fields did youuse and why?        */
typedef struct BankAccount{
  int acc_num;
  char name;
  int balance;
  int yearofexpiry;
  int securitycode;
  int yearofissue;
}bank;
/*----------------------------------------------------------------------------------*/
