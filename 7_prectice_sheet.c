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
/* Question 6 : Write a program to encrypt a string by adding 1 to ascii values of its characters.*/
/* Question 7 : Write a program to decrypt the string encrypted using encrypt function in problem 6. */
#include <stdio.h>
void encrypt(char *c);
void decrypt(char *c);
int main(){
    int n;
    printf("Enter number of characters in your string.\n");
    scanf("%d", &n);
    char c[2*n];
    printf("Enter your string to be encrypted.\n");
    scanf("%s", c);
    encrypt(c);
    printf("The encrypted String is %s\n", c);
    printf("If you want to decrypt the string also: \nPress 1 to decrypt \nIf not Then \nPress 2\n");
    int a;
    scanf("%d", &a);
    if(a==1){
        decrypt(c);
        printf("The decrypted String is %s", c);
    }
    else if(a==2){
        printf("Good Bye\n");
    }
    else{
        printf("Invalid Input\n");
    }
    return 0;
}
void encrypt(char *c){
    char *ptr = c;
    while(*ptr!= '\0'){
        *ptr = *ptr + 1;
        ptr++;
    }
    c = ptr;
}
void decrypt(char *c){
    char *ptr =c;
    while(*ptr != '\0'){
        *ptr = *ptr - 1;
        ptr++;
    }
    c = ptr;
}
/*-----------------------------------------------------------------*/
/* Question 8 : Write a program to count the occurence of a given character in a string. */
#include <stdio.h>
int occurence(char c[], char a);
int main(){
    int n;
    int count;
    printf("Enter the number of characters in your string\n");
    scanf("%d", &n);
    char c[2*n];
    printf("Enter Your String\n");
    scanf("%s", &c);
    char a;
    printf("Enter the character whose occurence you need to find.\n");
    fflush(stdin);
    scanf("%c", &a);
    count = occurence(c, a);
    printf("The character %c occurs %d times in the string %s",a,count,c);
    return 0;
}
int occurence(char c[], char a){
    char *ptr = c;
    int count = 0;
    while(*ptr != '\0'){
        if(*ptr==a){
            count++;
        }
        ptr++;
    }
    return count;
}
/*--------------------------------------------------------------------------------------------*/
/* Question 9 : Write a program to check whether or not a character is present in a string or not. */
#include <stdio.h>
void CharCheck(char *c, char a);
int main(){
    printf("Enter the number of characters in your string.\n");
    int n;
    scanf("%d", &n);
    char c[2*n];
    printf("Enter Your String.\n");
    scanf("%s", &c);
    char a;
    printf("Of which character's presence you wish to check for?\n");
    fflush(stdin);
    scanf("%c",&a);
    CharCheck(c,a);
    return 0;
}
void CharCheck(char *c, char a){
    char *ptr = c;
    int count = 0;
    while(*ptr != '\0' || *ptr==a){
        if(*ptr==a){
            count+=1;
        }
        else{
            count += 0;
        }
        ptr++;
    }
    if(count >= 1){
        printf("The character %c is Present in the string %s", a,c);
    }
    else{
        printf("The character %c is Absent in the string %s", a, c);
    }
}
