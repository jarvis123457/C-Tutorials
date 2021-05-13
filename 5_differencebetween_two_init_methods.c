#include <stdio.h> 
int main(){
  char st[]="Feynman";
  st="Einstein";//Through this method of passing string you cannot assign  new values
  printf("%s",st);
  char *ptr="Feynman";
  ptr="Einstein";// through char *ptr you can assign new character string to variable
  printf("%s",ptr);
  return 0;
}
