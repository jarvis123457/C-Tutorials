#include <stdio.h>

int main(){
  FILE *ptr;
  char c;
  ptr = fopen("6_file_read_fgetc.txt", "r");
  c = fgetc(ptr);
  while(c!=EOF){
    printf("%c",c); 
    c = fgetc(ptr);
  }
  return 0;
}
