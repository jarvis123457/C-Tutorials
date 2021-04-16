#include<stdio.h>
int factorial(int x);
int main(){
  int a ;
  printf("Enter number whose value of factorial you want.\n");
  scanf("%d", &a);
  int result = factorial(a); 
  printf("The value of %d! is %d", a, result);
  return 0;
}
int factorial(int x){
  if(x==1 || x==0){
    return 1;
  }
  else{
    return x*factorial(x-1);
  }
}
