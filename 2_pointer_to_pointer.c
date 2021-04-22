/* Pointer to a Pointer
A variable which stores address of a pointer  */
#include<stdio.h>

int main(){
  int i = 32;
  int *j=&i;
  int **k=&j;/*k stores the address of j. k is a pointer to a pointer. */
  int ***l=&k;// l stores address of k. You know the pattern now.
  printf("The value of i is %d\n", i);
  printf("The value of i is %d\n", *j);
  printf("The Address of i is %u\n", &i);
  printf("The Address of i is %u\n", j);
  printf("The Address of j is %u\n", &j);
  printf("The Value of j is %u\n", *(&j));
  printf("The Value of j is %u\n", *k);//**k gives value of i
  printf("The Address of j is %u\n", k);
  printf("The Value of k is %u\n", *(&k));
  printf("The Value of k is %u\n", *l);//***l gives value of i; **l gives value of j; *l gives value of k
  printf("The Address of k is %u\n", l);



  return 0;
}
