/* Task 1: Write a program in C to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the function. */
#include <stdio.h>
int factorialFunction(int n, int i);
int factorial(int n);
int main(){
  int n;
  int i;
  int a;
  i=1;
  n=5;
  // This can be modified to receive input from user for n and i so the series can be accessed from anywhere to anywhere like i!/i+(i+1)!/(i+1)+.......+(n-1)!/(n-1)+n!/n.
  a = factorialFunction(n, i);
  printf("1!/1+2!/2+3!/3+4!/4+5!/5 is equal to: %d\n", a);
  return 0;
}
int factorial(int n){
  if(n==1 || n==0){
    return 1;
  }
  else{
    return n*factorial(n-1);
  }
}
int factorialFunction(int n, int i){
  if(i<=n){
    return (factorial(i)/i)+factorialFunction(n, i+1);
  }
  return 0;
}
/*----------------------------------------------------------------------------------------*/
/* Task 2: Write a program in C to check a given number is even or odd using the function. */
#include <stdio.h>
void OddEven(int n);
int main(){
  int n;
  printf("Enter the value of number which you want to determine is odd or even:\n");
  scanf("%d", &n);
  OddEven(n);
  return 0;
}
void OddEven(int n){
  if((n-1)%2==0){
    printf("%d is an Odd Number\n", n);
  }
  else if((n-1)%2!=0){
    printf("%d is an Even Number\n", n);
  }
}
/*---------------------------------------------------------------------------------------*/
/* Task 3: Write a program in C to convert decimal number to binary number using the function. */
#include <stdio.h>
#include <math.h>
int DecimaltoBinary(int n, int a);
int main(){
  int n;
  int a=0;
  int b;
  printf("Enter the value of decimal number: \n");
  scanf("%d", &n);
  b = DecimaltoBinary(n,a);
  printf("The binary value of decimal number %d is: %d\n", n, b);
  return 0;
}
int DecimaltoBinary(int n, int a){
  int d=0;
  int i;
  for(i=0;d!=1;i++){
    d=n/(pow(2, i));
  }
  a = a + pow(10, i-1);
  if((n-pow(2,i-1))>0){
    a = DecimaltoBinary(n-pow(2,i-1),a);
    return a;
    }
  else{
    return a;
  }
}
/*---------------------------------------------------------------------------------*/
