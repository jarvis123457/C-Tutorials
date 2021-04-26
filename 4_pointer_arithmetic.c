#include<stdio.h>
int main(){
  int i =34;
  int *j=&i;
  printf("The value of j is %u\n", j);
  j++;
  printf("The value of j is %u\n", j);
  j++;
  j=j+1;// This is also addition of 4 units
  printf("The value of j is %u\n", j);

  // In replit ide the integer has 4 bytes memory so by ++j 4 units add to the value of j
  //size of character is 1 bytes
  char c = 34;
  char *d = &c;
  printf("The value of d is %u\n", d);
  d++;
  printf("The value of d is %u\n", d);
  float x =34;
  int *y=&x;
  printf("The value of j is %u\n", y);
  y++;
  printf("The value of j is %u\n", y);
  y++;
  y=y+1;// This is also addition of 4 units
  printf("The value of j is %u\n", y);

  return 0;
}
/*------------------------------------------------------------------------------------------*/
/* Quick Quiz => Try the four pointer arithmetic operations on another variable. */
#include<stdio.h>
int main(){
  int a = 6;
  int *b = &a;
  /*  9:08:44 */
  printf("The value of b is %u\n",b);
  printf("The value of b+4 is %u\n",b+4);//16 units added
  printf("The value of b-6 is %u\n",b-6);//24 units subtracted
  int c=4;
  int *d=&c;
  printf("The value of d is %u\n",d);
  printf("The value of b-d is %u\n", b-d);//Gives result in n variables back
  if(b>d){
    printf("b is greater than d\n");
  }
  else if(b<d){
    printf("b is less than d\n");
  }
  else{
    printf("b is equal to d\n");
  }
  return 0;
}
