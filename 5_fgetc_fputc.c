#include <stdio.h>

int main(){
  FILE *ptr;
  int num = 45;
  ptr = fopen("5_fgetc_fputc.txt", "r");
  // char c = fgetc(ptr);
  printf("The value of my character is %c\n",fgetc(ptr));
  printf("The value of my character is %c\n",fgetc(ptr));
  printf("The value of my character is %c\n",fgetc(ptr));
  printf("The value of my character is %c\n",fgetc(ptr));
  printf("The value of my character is %c\n",fgetc(ptr));
  printf("The value of my character is %c\n",fgetc(ptr));
  fclose(ptr);
  ptr = fopen("5_fgetc_fputc.txt", "w");
  putc('c', ptr);
  putc('c', ptr);
  putc('c', ptr);
  fclose(ptr);
  return 0;
}
