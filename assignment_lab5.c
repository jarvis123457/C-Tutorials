/* Write a C program to check whether an integer entered by the user is a prime number or not. Using For Loop. */
#include <stdio.h>
int main(){
  int n;
  int i;
  int prime;
  printf("Enter the value of the number you want check is prime or not.\n");
  scanf("%d",&n);
  for(i=2;i<n;i++){
    if(n%i==0){
      prime=0;
      break;
    }
    else{
      prime=1;
    }
  }
  if(prime==1){
      printf("%d is a Prime Number\n", n);
    }
    else{
      printf("%d is not a Prime number\n", n);
    }
  return 0;
}
/*------------------------------------------------------------------*/

