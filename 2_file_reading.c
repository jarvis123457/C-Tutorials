#include <stdio.h>

int main(){
  FILE *ptr;
  int num;
  int num2;
  ptr = fopen("2_file_reading.txt", "r"); // --> for reading the file
  fscanf(ptr, "%d", &num);
  fscanf(ptr, "%d", &num2);
  fclose(ptr);
  printf("The value of num is %d\n",num);
  printf("The value of num2 is %d\n",num2);
  
  
  return 0;
}
