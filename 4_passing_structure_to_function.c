#include <stdio.h>
#include <string.h>
struct employee{
  int code;
  float salary;
  char name[10];
};
void show(struct employee e);
int main(){
  struct employee e1;
  struct employee *ptr;
  ptr = &e1;
  (*ptr).code=101;// short hand for this is on next line
  ptr->code=105; // -> Arrow Operator
  // printf("%d", e1.code);
  ptr->salary=11.50;
  strcpy(e1.name,"Lavish");
  show(e1);
  printf("%d",e1.code);
  return 0; 
}
void show(struct employee e){
  printf("The code of employee is : %d\n", e.code);
  printf("The salary of employee is : %f\n", e.salary);
  printf("The name of employee is : %s\n", e.name);
  e.code=546;//This doesnt change the value of the e1 in main function.
}
