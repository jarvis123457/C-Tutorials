/* Q.1 : Write a program to print multiplication table of a given number n. */
#include <stdio.h>
int main(){
  int n;
  int i=0;
  printf("Enter the number n for which you want the multiplication table\n");
  scanf("%d", &n);
  printf("Multiplication table of %d\n", n);
  while(i<21){
    printf("%d * %d = %d\n", n, i, n*i);
    i++;
  }
}
/*-----------------------------------------------------------------------------------*/
/* Q.2 : Write a program to print multiplication table of 10 in reversed order. */
#include <stdio.h>
int main(){
  int i=20;
  printf("Multiplication table of 10\n");
  while(i>=0){
    printf("10*%d=%d\n", i, 10*i);
    i--;
  }
}
/*-------------------------------------------------------------------*/
/* Q.3 : A do while loop is executed:
    1) at least once;
    2) at least twice;
    3) at most once. */
    Answer = 1
/*----------------------------------------------------------------------*/
/* Q.4 : What can be done using one type of loop can also be done using the other two types of loops - True of False? */
True
/*---------------------------------------------------------------------*/
/* Q.5 : Write a program to sum first 10 natural numbers using while loop. */
#include <stdio.h>
int main(){
  int i=0;
  int a=0;
  int n=10;
  while(i<=n){
    printf("%d\n",i);
    a = i+a;
    i++;
  }
  printf("The sum of natural numbers from 1 to 10 is %d\n",a);
}
/*------------------------------------------------------------------------*/
/* Q.6 : Write a program to implement program 5 using for and do while loops. */
#include <stdio.h>
int main(){
  int i;
  int a=0;
  int n=10;
  for(i=0;i<=n;i++){
    printf("%d\n",i);
    a = i+a;
  }
  printf("The sum of natural numbers from 1 to 10 is %d\n",a);
}
#include <stdio.h>
int main(){
  int i;
  int a=0;
  int n=10;
  do{
    printf("%d\n", i);
    a=a+i;
    i++;
  }while(i<=n);
  printf("The sum of natural numbers from 1 to 10 is %d\n",a);
}
/*--------------------------------------------------------------------------*/
/* Q.7 : Write a program to calculate the sum of the numbers occuring in the multiplication table of 8.(consider 8*1 to 8*10). */
#include <stdio.h>
int main(){
  int i=0;
  int a=8;
  int n=10;
  int sum;
  do{
    sum+=a*i;
    i++;
  }while(i<=n);
  printf("The sum of multiples of %d from 0 to %d is %d\n", a, n,sum);
}
#include <stdio.h>
int main(){
  int i=0;
  int a=8;
  int n=10;
  int sum;
  while(i<=n){
    sum+=a*i;
    i++;
  }
  printf("The sum of multiples of %d from 0 to %d is %d\n", a, n,sum);
}
#include <stdio.h>
int main(){
  int i=0;
  int a=8;
  int n=10;
  int sum;
  for(i=0;i<=n;i++){
    sum+=a*i;
  }
  printf("The sum of multiples of %d from 0 to %d is %d\n", a, n,sum);
}
/*-------------------------------------------------------------------------*/
/* Q.8 : Write a program to calculate the factorial of a given number using a for loop. */
#include <stdio.h>
int main(){
  int i;
  int a;
  
  int factorial=1;
  printf("Enter the number whose factorial you want\n");
  scanf("%d", &a);
  for(i=a;i;i--){
    factorial*=i;
  }
  printf("The factorial of %d is %d\n", a,factorial);
}
/*-------------------------------------------------------------------------*/
/* Q.9 : Repeat question 8 using while loop. */
#include <stdio.h>
int main(){
  int i;
  int a;
  
  int factorial=1;
  printf("Enter the number whose factorial you want\n");
  scanf("%d", &a);
  i=a;
  while(i){
    factorial*=i;
    i--;
  }
  printf("The factorial of %d is %d\n", a,factorial);
}
/*------------------------------------------------------------------------*/
/* Q.10 : Write a program to check whether a given number is prime or not using loops. */
#include <stdio.h>
int main(){
  // Disclaimer this is not the best method to solve this problem because this is actually a data structure problem.
  int n;
  int i;
  int prime=0;
  printf("Enter the number to check whether its prime or not\n");
  scanf("%d",&n);
  for(i=2;i<n;i++){
    if(n%i==0){
      prime=1;
      break;
    }
  }
  if(prime==1 ){
    printf("%d is not a prime number.\n",n);
  }
  else{
    printf("%d is a prime number\n", n);
  }
  return 0;
}
/*---------------------------------------------------------------------*/
/* Q.11 : Implement 10 using other types of loops. */

      
