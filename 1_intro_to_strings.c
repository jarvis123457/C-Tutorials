#include <stdio.h>
int main(){
  char str[]= {'L','a','v','i','s','h','\0'};
  /* char str[] = "Lavish";
     Shortcut adds null character 
     Null character also takes space in memory of 1 byte*/
  printf("%c%c%c%c%c%c\n",str[0],str[1],str[2],str[3],str[4],str[5]);
  char *i;
  for(int j=0;j<6;j++){
    i=&str[j];
    printf("%c\n",*i);
  }
  return 0;
}
/*----------------------------------------------------------------------*/
/* Quick quiz => Create a string using "" and print its content using loops.*/
#include <stdio.h>
int main(){
  // char str[]= {'L','a','v','i','s','h','\0'};
  char str[] = "Lavish";
  /* char str[] = "Lavish";
     Shortcut adds null character 
     Null character also takes space in memory of 1 byte*/
  printf("%c%c%c%c%c%c\n",str[0],str[1],str[2],str[3],str[4],str[5]);
  char *i= str;
  while(*i!='\0'){
    printf("%c", *i);
    i++;
  }
  return 0;
}
