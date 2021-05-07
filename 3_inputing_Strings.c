#include <stdio.h>
int main(){
  char s[34];
  printf("Enter your name: \n");
  scanf("%s", s);// String by this method does not allow multi-word or spaces between characters
  printf("Your name is: %s", s);
  return 0;
}
