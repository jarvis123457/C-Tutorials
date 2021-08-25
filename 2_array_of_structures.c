#include <stdio.h>
#include <string.h>
struct employee{
  int code;
  float salary;
  char name[10];
};
int main(){
  struct employee facebook[100];
  struct employee harry = {3546,1100, "Harry"};
  printf("Code is :%d \n", harry.code);
  printf("Salary is :%f \n", harry.salary);
  printf("Name is :%s \n", harry.name);
  return 0; 
}
