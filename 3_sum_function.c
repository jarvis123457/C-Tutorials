#include<stdio.h>
/* Sum is a function which takes parameters a and b as inputs and returns an integer as the output. */
int sum(int a, int b);//Function Prototyp
int main(){
  int c;
  c = sum(2,7);// 2 and 7 are arguments while 'a' and 'b' are parameters. Arguments are the actual values provided while code is being run. While Parameters are variable values while those variables can take any value given to them.
  printf("The value of c is %d", c);
  return 0;
}
int sum(int a, int b){
  int result;
  result = a + b;
  return result;// A function can only return one value at a time.
}
