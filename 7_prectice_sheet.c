/* Q1: Which of the following is used to appropriately read a multi-word string:
(a) gets()
(b) puts()
(c) printf
(d) scanf
Answer: gets() */
/*------------------------------------------------------------------------------------*/
/* Question 2 : Write a Program to take a string as input from the user using %c and %s. Confirm that strings are equal */
#include <stdio.h>
#include <string.h>
int main(){
  char st1[34];
  char st2[34];
  char c;
  int i = 0;
  printf("Enter the value of first string\n");
  scanf("%s", st1);
  printf("Enter the value of first string character by character\n");
  fflush(stdin);
  while(c!='\n'){
    fflush(stdin);
    scanf("%c", &c);
    st2[i] = c;
    i++;
  }
  st2[i-1] = '\0';
  printf("The value of st1 is %s\n", st1);
  printf("The value of st2 is %s\n", st2);
  printf("strcmp for these values return %d\n", strcmp(st1,st2));
  return 0;
}
/*-----------------------------------------------------------------------------------------------------*/
