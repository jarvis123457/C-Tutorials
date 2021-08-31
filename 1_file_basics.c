#include <stdio.h>

int main(){
  FILE *ptr;
  ptr = fopen("1_file_basics.txt", "r"); // --> for reading the file
  ptr = fopen("1_file_basics.txt", "w"); // --> for writing the file
  /* 
  "r" --> for reading mode
  "rb"--> for reading in binary
  "w" --> for writing
  "wb"--> for writing in binary
  "a" --> for append
  
  Types of Files
  1. Text files (.txt,.c)
  2. Binary files (.jpg,.dat)
  */
  return 0;
}
