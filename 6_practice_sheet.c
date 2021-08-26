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
/*--------------------------------------------------------------------------*/
/* Question 2 => Write a function sumvector which returns the sum of two vectors passed to it. The vectors must be two-dimensional.        */
#include<stdio.h>

struct vector{
  int x;
  int y;
};
struct vector sumVector(struct vector v1, struct vector v2);


int main(){
  struct vector v1, v2, sum;
  v1.x = 34;
  v1.y = 54;
  printf("X dim is %d and Y dim is %d\n", v1.x, v1.y);
  v2.x=5;
  v2.y=4;
  sum = sumVector(v1,v2);
  printf("X dim is %d and Y dim is %d\n", sum.x, sum.y);
  return 0;
}
struct vector sumVector(struct vector v1, struct vector v2){
  struct vector result;
  result.x=v1.x+v2.x;
  result.y=v1.y+v2.y;
  return result;
}
