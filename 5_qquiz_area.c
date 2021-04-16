/* Quick Quiz => Use the library functions to calculate the square of the area with side a. */
#include<stdio.h>
#include<math.h>

int main(){
  int side;
  printf("Enter the value of side of square\n");
  scanf("%d", &side);
  int area = pow(side,2);
  printf("The value of area of square with given value of side is %d\n", area);
  return 0;
}
