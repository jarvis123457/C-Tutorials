/* Question 1: Write a program in which a function will take any number as argument and will display its table using loops. (It will only display multiples with odd numbers) */
#include <stdio.h>
void MultiplicationTable(int n, int a);
int main(){
  int n;
  int a;
  printf("Enter the number whose multiplication table you want\n");
  scanf("%d", &n);
  printf("Enter the value of the highest odd multiplier\n");
  scanf("%d", &a);
  MultiplicationTable(n,a);
  return 0;
}
void MultiplicationTable(int n, int a){
  printf("Multiplication Table of %d\n",n);
  for(int i=0;i<a;i++){
    if((i+1)%2!=0){
      printf("%d multiplied by %d is : %d\n",n,i+1,n*(i+1));
    }
  }
}
/*-------------------------------------------------------------------------------------------*/
