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
/* Task 2: Write a C Program to check whether the number entered by the user is a palindrome or not. Using while Loop. */
/* Let's say abcd is palindrome. At first we need to find d which can be found as a remainder from division by 10. But here the number is in 1000s why I used 10 because we would not know for unknown numbers what 10 to exponent they exist so remainder of 10 will always give d. Since in our reversed number(palindromic conjugate) d is the first digit. So to make the conjugate we will have conjugate= conjugate*10+remainder. In d's case remainder=d so initially our conjugate=0 but after this point it will become d. Now to separate c first we need to cut off d which we do by making abcd an integer and dividing it by 10 since we cannot have decimals so our number becomes abc and we repeat the entire process till we get to a then a/10 becomes zero where condition for our loops becomes false. */ 
#include <stdio.h>
int main(){
  int n, remainder, p_conjugate=0, o_conjugate;/* p_conjugate is the palindromic conjugate while o_conjugate is the original number.*/
  printf("Enter the number to check whether it is a palindrome or not.\n");
  scanf("%d", &n);
  o_conjugate = n;
  while(n)/*when n becomes 0 condition automatically becomes false*/{
    remainder = n%10;
    printf("Separated digit is %d\n", n%10);
    p_conjugate = p_conjugate*10 + remainder;
    n = n/10;
    printf("Remaining body %d\n", n);
  }
  printf("Reversed Number %d\n", p_conjugate);
  if(p_conjugate == o_conjugate){
    printf("%d is a palindrome.\n", o_conjugate);
  }
  else{
    printf("%d is not a palindrome.\n", o_conjugate);
  }
  return 0;
}
/*-------------------------------------------------------------------------------------------------------------*/


