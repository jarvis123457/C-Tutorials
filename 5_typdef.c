#include <stdio.h>
#include <string.h>
typedef struct employee{
  int code;
  float salary;
  char name[10];
} emp;

int main(){
  // Declaring e1 and ptr
  emp e1;// Shortens from struct employee to emp
  emp *ptr;
  ptr=&e1;
  // Set the member values for e1
  ptr->code=404;
  ptr->salary=11.02;
  strcpy(ptr->name,"Kamran");
  printf("%d", e1.code);
  return 0;
}
