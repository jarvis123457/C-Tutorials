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
/* My own string length function */
#include <stdio.h>
int stringLength(char st[]);
int main(){
  char *ptr="Feynman";
  ptr="Einstein";// through char *ptr you can assign new character string to variable
  printf("The length of string %s is %d",ptr,stringLength(ptr));
  return 0;
}
int stringLength(char st[]){
  int len=0;
  char *i=st;
  while(*i!='\0'){
    printf("%c",*i);
    len=len+1;
    i++;
  }
  printf("\n");
  return len;
}
/*---------------------------------------------------------------------------------*/
#include <stdio.h>
#include <string.h>
int main(){
  char *ptr="Feynman";
  ptr="Einstein";// through char *ptr you can assign new character string to variable
  char st2[45];
  strcpy(st2, ptr);/* strcpy is a function which copies the value of source function to the target string. strcpy(char *restrict __dest, const char *restrict __src) 
                     Destination                  Source*/
  //The condition is that target string has capacity to accomodate source string.
  printf("Now the st2 is %s", st2);
  return 0;
}
/*----------------------------------------------------------------------------------*/
#include <stdio.h>
#include <string.h>
int main(){
  char *ptr="Feynman";
  ptr="Einstein";// through char *ptr you can assign new character string to variable
  char st2[45]= "Albert ";
  strcat(st2, ptr);//Copies the source string ptr and joins it with the target string but the source string always comes after the target string. 
  printf("Now the st2 is %s",st2);
  return 0;
}
/*-----------------------------------------------------------------------------------*/
#include <stdio.h>
#include <string.h>
int main(){
  char *ptr="Feynman";
  ptr="Einstein";// through char *ptr you can assign new character string to variable
  char st2[45]= "Albert ";
  int val = strcmp(st2, ptr);// Compares the ASCII values of first mismatching character its like ASCII value of A - ASCII value of E 065-069=-4 target-source.
  printf("Now the val is %d", val);
  return 0;
}
/*---------------------------------------------------------------------------------------*/
