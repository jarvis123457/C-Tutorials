#include <stdio.h>
int main(){
  char s[34];
  printf("Enter your name: \n");
  scanf("%s", s);// String by this method does not allow multi-word or spaces between characters
  printf("Your name is: %s", s);
  return 0;
}
/*-----------------------------------------------------------------*/
#include <stdio.h>
int main(){
  char s[34];
  printf("Enter your name: \n");
  gets(s);// gets used for MULTI-WORD string.
  puts(s);// puts prints MULTI-WORD string and places cursor in next line.
  // printf("Your name is: %s", s);
  
  return 0;
}
