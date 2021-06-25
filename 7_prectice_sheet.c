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
/* Question 3 : Write your own version of strlen function from <string.h> */
#include <stdio.h>
int strlength(char *st);
int main(){
  char st[] = "Lavish";
  int l = strlength(st);
  printf("the length of this string is %d\n", l);
  return 0;
}
int strlength(char *st){
  char *ptr = st;
  int len = 0;
  while(*ptr != '\0'){
    len++;
    ptr++;
  }
  return len;
}
/*-----------------------------------------------------------------------------*/
/* Question 4 : Write a function slice() to slice a string. It should change the original string such that it is now the sliced string. Take m and n as the start and ending position forslice. */
#include <stdio.h>
void slice(char *st, int m, int n){
    printf("Into The Function\n");
    int i;
    for(i=0;(m+i)<n;i++){
        st[i] = st[i+m];
    }
    st[i] = '\0';
}
int main(){
    char st[100];
    int m, n;
    printf("Enter A String\n");
    scanf("%s", st);
    printf("Enter a value from which you want to slice the string.\n");
    scanf("%d", &m);
    printf("Enter a value at which you want to end slicing of the string.\n");
    scanf("%d", &n);
    printf("Going Into the function");
    slice(st, m-1, n-1);
    printf("The sliced string is %s\n", st);
    return 0;
}
/*---------------------------------------------------------------------------------------------*/
/* Question 5 : Write your own version of function strcpy from <string.h> */
#include <stdio.h>
void MYstrcpy(char *target, char *source, int n);
int main(){
    int n;
    printf("Enter the number of characters in your string.\n");
    scanf("%d",&n);
    char target[2*n], source[2*n];
    printf("Enter your String\n");
    scanf("%s", &source);
    MYstrcpy(target, source, n);
    printf("The copied string is %s", target);
    return 0;
}
void MYstrcpy(char *target, char *source, int n){
    int i;
    for(i=0;i<n;i++){
        target[i]=source[i];
    }
    target[i] = '\0';
}
/*--------------------------------------------------------------------------------------------*/
