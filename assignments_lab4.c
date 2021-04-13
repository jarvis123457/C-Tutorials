/* Task 3 : Print sum of Natural numbers from 1 to N. Using do while loop. */
#include <stdio.h>
int main(){
  int n;
  int i=1;
  int sum=0;
  printf("Enter the number of natural numbers from 1 to N to find their sum\n");
  scanf("%d",&n);
  do{
    sum+=i;
    i++;
  }while(i<=n);
  printf("The sum of natural numbers from 1 to %d is %d\n", n, sum);
  return 0;
}
/*----------------------------------------------------------------------------------------------------*/
/* Task 2 : Write a program to calculate Fibonacci which calculates the Fibonacci number in series. For example
0,1,1,2,3,5,6,13,21,34,55,89,144,...
We want to loop until our current term is 100 or larger using while loop. */
#include <stdio.h>
int main(){
  int n1=0;
  int n2=1;
  int i=0;
  printf("Fibonacci Sequence\n");
  printf("%d\n",n1);
  printf("%d\n",n2);
  while(i<=100)/*This gives just the next term after 89 which is in 100s.*/{
    i=n1+n2;
    printf("%d\n", i);
    n1=n2;
    n2=i;
  }
  return 0;
}
/*-------------------------------------------------------------------------------*/
/* Task 1 : Print Natural Numbers in Reverse Order from 1 to N. Using for loop. */
#include <stdio.h>
int main(){
  int n;
  int i;
  printf("Enter the number of natural numbers you want to print in reverse order\n");
  scanf("%d",&n);
  for(i=n;i;i--){
    printf("%d\n", i);
  }
  return 0;
}
/*-------------------------------------------------------------------------------------*/
