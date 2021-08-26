/*                         Practice Problems                                  */
/* Question 1 => Create a two dimensional vector using structures in C        */
#include<stdio.h>

struct vector{
  int x;
  int y;
};

int main(){
  struct vector v1, v2;
  v1.x = 34;
  v1.y = 54;
  printf("X dim is %d and Y dim is %d\n", v1.x, v1.y);  
  return 0;
}
