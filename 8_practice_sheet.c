/* Q1 : Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points to the third element where ptr is a pointer pointing to the first element of the array.*/
#include <stdio.h>
int main(){
  int arr[10];
  int *ptr = &arr[0];//it can also be ptr=arr
  ptr = ptr+2;
  if(ptr==&arr[2]){
    printf("These point to the same location");
  }
  else{
    printf("These do not point to the same location");
  }
  return 0;
}
/*------------------------------------------------------------------------------------*/
/* Q2 : If S[3]  is a 1D array of integers then *(S+3) refers to the third element:
(a) True;
(b) False;
(c) Depends;
Answer: (b) because it points to fourth element */
/*------------------------------------------------------------------------------------*/
/* Q3 : Write a program to create an array of 10 integers and store multiplication table of 5 in it. */
#include <stdio.h>
int main(){
  printf("Enter value of number of multiples of 5 do you want\n");
  int n;
  scanf("%d", &n);
  int mul[n];
  for(int i=0;i<n;i++){
    mul[i]=5*(i+1);
  }
  for(int i=0;i<n;i++){
    printf("5 * %d is %d\n", i+1, mul[i]);
  }
   
  return 0;
}
  /*--------------------------------------------------------------------------------*/
  /* Q4 : Repeat problem 3 by a general input provided by the user using scanf */
  #include <stdio.h>
int main(){
  int m;
  printf("Enter the value of number whose multiplication table you want\n");
  scanf("%d", &m);
  printf("Enter value of number of multiples of %d do you want\n", m);
  int n;
  scanf("%d", &n);
  int mul[n];
  for(int i=0;i<n;i++){
    mul[i]=m*(i+1);
  }
  for(int i=0;i<n;i++){
    printf("%d * %d is %d\n", m, i+1, mul[i]);
  }
  return 0;
} 
/*---------------------------------------------------------------------------------*/
/* Q5 : Write a program containing a function which reverses the error passed to it. */
#include <stdio.h>
void reverse(int *arr, int n);
int main(){
  int arr[]={1,2,3,4,5,6,7};
  reverse(arr, 7);
  for(int i=0;i<7;i++){
    printf("The value of element %d is %d\n", i+1, arr[i]);
  }
  return 0;
}
void reverse(int *arr, int n){
  for(int i=0;i<(n/2);i++){
    int temp;
    temp = arr[i];
    arr[i] = arr[n-i-1];
    arr[n-i-1] = temp;
  }
}
/*---------------------------------------------------------------------------------------------*/
/* Q6 : Write a program containing functions which counts the number of positive integers in an array. */
#include <stdio.h>
int negativeCount(int *arr, int n);
int main(){
  int arr[]={-1,2,-3,4,-5,6,7, -66, -99, -100,33, 333, 49, -7, -10, -21};
  printf("The number of negative elements in the array is %d\n", negativeCount(arr, 16));
  return 0;
}
int negativeCount(int *arr, int n){
  int count=0;
  for(int i=0;i<n;i++){
    if(arr[i]<0){
      count++;
    }
  }
  return count;
}
/*--------------------------------------------------------------------------------------------*/
/* Q7 : Create an array of size 3x10 containing multiplication tables of the numbers 2,7 and 9 */
#include <stdio.h>
void multiplicationtables(int *num, int m, int n){
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      printf("%d * %d is equal to %d\n", num[i], j+1, num[i]*(j+1));
    }
  }
}
int main(){
  int m, n;
  printf("Enter the number of numbers whose multiplication tables you want: \n");
  scanf("%d", &m);
  printf("How many multiples for each number you want: \n");
  scanf("%d", &n);
  int num[m];
  for(int i=0;i<m;i++){
    printf("Enter the numbers whose multiplication tables you need\n");
    scanf("%d", &num[i]);
  }
  multiplicationtables(num, m, n);
  
  return 0;
}
/*--------------------------------------------------------------------------------------------*/
/* Q7 : Harry Method */
#include <stdio.h>
void printTable(int *mulTable, int num, int n){
  printf("The multiplication table of %d is :\n",num);
  for(int i=0;i<n;i++){
    mulTable[i]=num*(i+1);
  }
  for(int i=0;i<10;i++){
    printf("%d * %d is %d\n",num, i+1, mulTable[i]);
  }
  printf("**********************\n");
}
int main(){
  int mulTable[3][10];
  printTable(mulTable[0], 2,10);
  printTable(mulTable[1], 7,10);
  printTable(mulTable[2], 9,10);
  return 0;
}
/*------------------------------------------------------------------------------------------------*/
/* Q8 : Repeat Problem 7 using custom input from user. Check above Q7 my method. */ 
/*------------------------------------------------------------------------------------------------*/
/* Q9 : Create a three-dimensional array and print the address of its elements in increasing order. */
#include <stdio.h>

int main(){
  int arr[2][3][4];
  for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
      for(int k=0;k<4;k++){
          printf("The address of element arr[%d][%d][%d] is : %u\n", i,j,k, &arr[i][j][k]);
  }
    }
  }

  return 0;
}

