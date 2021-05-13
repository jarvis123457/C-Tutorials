#include <stdio.h> 
#include <string.h>
int main(){
  char *ptr="Feynman";
  ptr="Einstein";// through char *ptr you can assign new character string to variable
  printf("%s\n",ptr);
  int a = strlen(ptr);//strlen gives the number of charachters of the string without including the null character.
  printf("The length of string %s is %d\n",ptr,a);
  return 0;
}
/*----------------------------------------------------------------------------------*/
