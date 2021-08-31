#include <stdio.h>

int main(){
  FILE *ptr;
  int num = 45;
  ptr = fopen("4_writing_file.txt", "w");
  fprintf(ptr, "The number is %d\n",num);
  fprintf(ptr, "Happy to use CodeWithHarry\n");
  fclose(ptr);
  return 0;
}
