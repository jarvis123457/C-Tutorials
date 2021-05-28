/*  Task 1: Write a program in C to read n number of values in an array and display it in reverse order. */
#include <stdio.h>
int main(){
  int n;
  int a[13]={6,9,8,12,14,16,84,12,54,215,546,21,29};
  n=13;
  for(int i=(n-1);i>=0;i--){
    printf("%d\n",a[i]);
  }
  return 0;
}
/*----------------------------------------------------------*/
/*  Task 2: Write a program in C to copy the elements of one array into another array. */
#include <stdio.h>
int main(){
  int n;
  int a[13]={6,9,8,12,14,16,84,12,54,215,546,21,29};
  n=13;
  int b[13];
  for(int i=0;i<n;i++){
    b[i]=a[i];
    printf("%d\n",b[i])/* To show the elements are copied correctly */;
  }
  return 0;
}
