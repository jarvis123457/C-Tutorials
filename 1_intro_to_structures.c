#include <stdio.h>
#include <string.h>
struct employee{/* This declares a new user defined data-type*/
  int code;
  float salary;
  char name[10];
};
int main(){
  struct employee e1;
  e1.code = 343945;// dot is "member operator"
  e1.salary = 150000;
  // e1.name = "Harry"; --> wont work
  strcpy(e1.name, "Harry");
  printf("%s's id is %d and salary is %.2f.\n",e1.name,e1.code,e1.salary);
  return 0;
}
/*------------------------------------------------------------------------*/
/* Quick quiz => Write a program to store the details of 3 employees from user defined data. Use the structure declared above. */
#include <stdio.h>
#include <string.h>
struct employee{/* This declares a new user defined data-type*/
  int code;
  float salary;
  char name[10];
};
int main(){
  struct employee e1;
  struct employee e2;
  struct employee e3;
  printf("Enter the value for code of e1\n");
  scanf("%d", &e1.code);
  printf("Enter the value for salary of e1\n");
  scanf("%f", &e1.salary);
  printf("Enter the value for name of e1\n");
  scanf("%s", e1.name);
  printf("Enter the value for code of e2\n");
  scanf("%d", &e2.code);
  printf("Enter the value for salary of e2\n");
  scanf("%f", &e2.salary);
  printf("Enter the value for name of e2\n");
  scanf("%s", e2.name);
  printf("Enter the value for code of e3\n");
  scanf("%d", &e3.code);
  printf("Enter the value for salary of e3\n");
  scanf("%f", &e3.salary);
  printf("Enter the value for name of e3\n");
  scanf("%s", e3.name);
  return 0;
}
// 11:49:30
